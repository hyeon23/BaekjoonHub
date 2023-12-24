#include <bits/stdc++.h>
using namespace std;
int N, M, ans = 0;
vector<int> j(6);
void dfs(int curD, int curJ, int curP){
    if(curD == N) {
        if(curJ >= M) ++ans;
        return;
    }
    if(curP == 0){
        dfs(curD+1, curJ + j[0] / 2, 0);
        dfs(curD+1, curJ + j[3] / 2, 0); 
    }
    else{
        dfs(curD+1, curJ + j[0], 0);
        dfs(curD+1, curJ + j[3], 0);
    }
    if(curP == 1){
        dfs(curD+1, curJ + j[1] / 2, 1);
        dfs(curD+1, curJ + j[4] / 2, 1);
    }
    else{
        dfs(curD+1, curJ + j[1], 1);
        dfs(curD+1, curJ + j[4], 1);
    }
    if(curP == 2){
        dfs(curD+1, curJ + j[2] / 2, 2);
        dfs(curD+1, curJ + j[5] / 2, 2);
    }
    else{
        dfs(curD+1, curJ + j[2], 2);
        dfs(curD+1, curJ + j[5], 2);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    for(int i = 0; i < 6; ++i){
        cin >> j[i];
    }
    dfs(0, 0, -1);
    cout << ans;
    return 0;
}