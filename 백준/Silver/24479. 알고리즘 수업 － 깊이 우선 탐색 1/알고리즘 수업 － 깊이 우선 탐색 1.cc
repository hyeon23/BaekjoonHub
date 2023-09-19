#include <bits/stdc++.h>
using namespace std;

int N, M, R, u, v;
vector<bool> visited(100001);
int rnk = 1;

void dfs(vector<vector<int>>& vec, vector<int>& ans, int point){
    //방문 체크
    if(visited[point]) return;
    
    //현재 점 방문
    visited[point] = true;

    ans[point] = rnk;
    rnk++;

    sort(vec[point].begin(), vec[point].end());

    for(int i = 0; i < vec[point].size(); ++i){
        dfs(vec, ans, vec[point][i]);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M >> R;

    vector<vector<int>> vec(N+1);
    vector<int> ans(N+1, 0);

    for(int i = 0; i < M; ++i){
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    dfs(vec, ans, R);

    for(int i = 1; i <= N; ++i){
        cout << ans[i] << '\n';
    }

    return 0;
}