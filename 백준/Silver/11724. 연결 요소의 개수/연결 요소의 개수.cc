#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, u, v, cnt = 0;

    cin >> N >> M;

    vector<vector<int>> arr(N+1);
    bool visited[N+1];

    fill(visited, visited+N+1, false);

    for(int i = 0; i < M; ++i){
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    for(int i = 1; i <= N; ++i){
        if(visited[i]) continue;

        if(arr[i].empty()) {//정점 하나 덩그라니 존재하는 경우
            ++cnt;
            continue;
        }

        stack<int> stk;
        visited[i] = true;
        stk.push(i);

        while(!stk.empty()){
            int curNode = stk.top();
            stk.pop();

            for(int j = 0; j < arr[curNode].size(); ++j){
                if(visited[arr[curNode][j]]) continue;

                visited[arr[curNode][j]] = true;
                stk.push(arr[curNode][j]);
            }
        }

        ++cnt;
    }

    cout << cnt;

    return 0;
}