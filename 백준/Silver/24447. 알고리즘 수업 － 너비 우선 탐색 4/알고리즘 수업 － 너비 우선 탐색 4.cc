#include <bits/stdc++.h>
using namespace std;

int N, M, R, u, v;
vector<vector<int>> vec(100001);
vector<long long> visited(100001, -1);
long long visitCnt = 1;
long long sum = 0;

void bfs(int cur){
    queue<int> bfsQ;
    bfsQ.push(cur);
    visited[cur] = 0;
    visitCnt++;
    while(!bfsQ.empty()){
        int curr = bfsQ.front();
        bfsQ.pop();

        for (auto now : vec[curr]) {
            if (visited[now] != -1)continue;
            visited[now] = visited[curr] + 1;
            sum += visited[now] * visitCnt++;
            bfsQ.push(now);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M >> R;

    for(int i = 1; i <= M; ++i){
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for(int i = 0; i <= N; ++i){
        sort(vec[i].begin(), vec[i].end());
    }

    bfs(R);//depth 0부터 탐색

    cout << sum;
}