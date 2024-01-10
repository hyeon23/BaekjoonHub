#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> input;
vector<int> vec(9);
vector<bool> visited(9);
set<vector<int>> ans;
//중복되는 수열 출력 불가
//사전 순으로 증가
void DFS(int depth, int num){
    if(depth == M){
        vector<int> anstmp;
        for(int i = 0; i < M; ++i)
            anstmp.push_back(vec[i]);
        ans.insert(anstmp);
        return;
    }
    for(int i = num; i < N; ++i){
        if(!visited[i]){
            visited[i] = true;
            vec[depth] = input[i];
            DFS(depth+1, i+1);
            visited[i] = false;
        }
    }
}
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end());
    DFS(0, 0);
    for(auto s : ans){
        for(auto i : s){
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}