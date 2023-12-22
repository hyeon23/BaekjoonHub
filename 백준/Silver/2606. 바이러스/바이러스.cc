#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vvec(101);
bool visited[101];
int ans = 0;
void dfs(int level){
    stack<int> stk;
    visited[level] = true;
    stk.push(level);
    while(!stk.empty()){
        int cur = stk.top();
        stk.pop();
        for(int i = 0; i < vvec[cur].size(); ++i){
            if(visited[vvec[cur][i]]) continue;
            ans++;
            visited[vvec[cur][i]] = true;
            stk.push(vvec[cur][i]);
        }
    }
}
int main(){
    int N, M, x, y;
    cin >> N >> M;
    for(int i = 0; i < M; ++i){
        cin >> x >> y;
        vvec[x].push_back(y);
        vvec[y].push_back(x);
    }
    dfs(1);
    cout << ans;
    return 0;
}