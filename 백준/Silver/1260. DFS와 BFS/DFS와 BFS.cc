#include <bits/stdc++.h>
using namespace std;

int N, M, V, x, y;
vector<vector<int>> vvec(1001);
bool visitedDFS[1001];

void dfs(int level){
    for(int i = 1; i <= N; ++i){
        if(!vvec[i].empty()) sort(vvec[i].rbegin(), vvec[i].rend());
    }
    stack<int> stk;
    stk.push(level);

    while(!stk.empty()){
        int cur = stk.top();
        stk.pop();
        for(int i = 0; i < vvec[cur].size(); ++i){
            if(visitedDFS[vvec[cur][i]]) continue;
            stk.push(vvec[cur][i]);
        }
        if(!visitedDFS[cur]) cout << cur << ' ';
        visitedDFS[cur] = true;
    }
    cout << '\n';
}

bool visitedBFS[1001];

void bfs(int level){
    for(int i = 1; i <= N; ++i){
        if(!vvec[i].empty()) sort(vvec[i].begin(), vvec[i].end());
    }
    queue<int> que;
    visitedBFS[level] = true;

    que.push(level);

    while(!que.empty()){
        int cur = que.front();
        que.pop();

        for(int i = 0; i < vvec[cur].size(); ++i){
            if(visitedBFS[vvec[cur][i]]) continue;

            visitedBFS[vvec[cur][i]] = true;
            que.push(vvec[cur][i]);
        }
        cout << cur << ' ';
    }
    cout << '\n';
}

int main(){
    cin >> N >> M >> V;

    for(int i = 0; i < M; ++i){
        cin >> x >> y;
        vvec[x].push_back(y);
        vvec[y].push_back(x);
    }

    dfs(V);
    bfs(V);
    return 0;
}