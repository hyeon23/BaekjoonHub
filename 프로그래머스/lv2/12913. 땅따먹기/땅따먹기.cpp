#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> memo; // 메모이제이션을 위한 배열

int dfs(int level, int curx, vector<vector<int>>& land){
    if(level == land.size() - 1)
        return land[level][curx];

    if(memo[level][curx] != -1)
        return memo[level][curx]; // 메모이제이션된 값이 있다면 반환

    int maxSum = 0;
    for(int i = 0; i < 4; ++i){
        if(i == curx)
            continue;
        else
            maxSum = max(maxSum, dfs(level + 1, i, land));
    }

    memo[level][curx] = maxSum + land[level][curx]; // 계산 결과를 메모이제이션
    return memo[level][curx];
}

int solution(vector<vector<int>> land)
{
    int n = land.size();
    memo.resize(n, vector<int>(4, -1)); // 메모이제이션 배열 초기화

    int answer = 0;
    for(int i = 0; i < 4; ++i)
        answer = max(answer, dfs(0, i, land));
    return answer;
}