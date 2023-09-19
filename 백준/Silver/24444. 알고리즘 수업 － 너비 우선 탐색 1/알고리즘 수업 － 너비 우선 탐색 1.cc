#include <bits/stdc++.h>
using namespace std;

int N, M, R, u, v;
vector<vector<int>> vec(100001);
vector<bool> visited(100001);
vector<int> ans(100001, 0);

int rnk = 1;

void bfs(int cur){
    visited[cur] = true;

    queue<int> bfsQ;

    bfsQ.push(cur);

    while(!bfsQ.empty()){

        int f = bfsQ.front();

        bfsQ.pop();

        ans[f] = rnk;

        rnk++;

        for(int i = 0; i < vec[f].size(); ++i){
            if(!visited[vec[f][i]]){
                visited[vec[f][i]] = true;
                bfsQ.push(vec[f][i]);
            }
        }
    }
}

int main(){    
    cin >> N >> M >> R;

    for(int i = 1; i <= M; ++i){
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for(int i = 1; i <= N; ++i){
        sort(vec[i].begin(), vec[i].end());
    }

    bfs(R);//depth 0부터 탐색

    for(int i = 1; i <= N; ++i){
        cout << ans[i] << '\n';
    }
}