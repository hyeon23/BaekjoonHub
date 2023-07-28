#include <map>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.second > B.second;
}

int solution(int k, vector<int> tangerine) {
    //수확한 귤 중 크기종류가 최소가 되도록 k개
    map<int, int> smap;
    for(int i = 0; i < tangerine.size(); ++i)
        smap[tangerine[i]]++;
    //1: 1개 2: 2개: 3: 2개 4: 1개 5: 2개
    
    vector<pair<int, int>> cvec(smap.begin(), smap.end());
    sort(cvec.begin(), cvec.end(), cmp);
    
    stack<int> busket;
    int sum = 0;
    int count = 0;
    for(int i = 0; i < cvec.size(); ++i){
        if(sum + cvec[i].second >= k){
            ++count;
            return count;
        }
        else{
            ++count;
            sum += cvec[i].second;
            //k = 3 1 1 1 1 1 5 5
        }
    }
    return 1;
}