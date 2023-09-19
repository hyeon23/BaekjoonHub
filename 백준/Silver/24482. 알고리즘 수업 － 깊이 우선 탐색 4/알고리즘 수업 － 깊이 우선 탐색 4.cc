#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> vvec(100001);
vector<bool> visited(100001);
vector<int> ans(100001, -1);
int depth = 0;

void dfs(int cur){
    if(visited[cur]) return;

    visited[cur] = true;
    ans[cur] = depth;

    depth++;

    for(int i = 0; i < vvec[cur].size(); ++i){
        dfs(vvec[cur][i]);
    }

    depth--;
}


int main(){
    int N, M, R, u, v;
    cin >> N >> M >> R;

    for(int i = 1; i <= M; ++i){
        cin >> u >> v;
        vvec[u].push_back(v);
        vvec[v].push_back(u);
    }

    for(int i = 1; i <= N; ++i){
        sort(vvec[i].begin(), vvec[i].end(), greater<int>());
    }

    dfs(R);

    for(int i = 1; i <= N; ++i){
        cout << ans[i] << '\n';
    }

    return 0;
}