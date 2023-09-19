// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> vvec(100001);
// vector<bool> visited(100001);
// vector<int> ans(100001, -1);
// int depth = 0;

// void dfs(int cur){
//     if(visited[cur]) return;

//     visited[cur] = true;
//     ans[cur] = depth;

//     depth++;

//     for(int i = 0; i < vvec[cur].size(); ++i){
//         dfs(vvec[cur][i]);
//     }

//     depth--;
// }


// int main(){
//     int N, M, R, u, v;
//     cin >> N >> M >> R;

//     for(int i = 1; i <= M; ++i){
//         cin >> u >> v;
//         vvec[u].push_back(v);
//         vvec[v].push_back(u);
//     }

//     for(int i = 1; i <= N; ++i){
//         sort(vvec[i].begin(), vvec[i].end(), greater<int>());
//     }

//     dfs(R);

//     for(int i = 1; i <= N; ++i){
//         cout << ans[i] << '\n';
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int N, M, R, u, v;
// vector<bool> visited(100001);
// int depth = 0;

// void dfs(vector<vector<int>>& vec, vector<int>& ans, int point){
//     //방문 체크
//     if(visited[point]) return;
    
//     //현재 점 방문
//     visited[point] = true;

//     ans[point] = depth;

//     depth++;

//     sort(vec[point].begin(), vec[point].end());

//     for(int i = 0; i < vec[point].size(); ++i){
//         dfs(vec, ans, vec[point][i]);
//     }

//     depth--;
// }

#include <bits/stdc++.h>
using namespace std;

int N, M, R, u, v;
vector<bool> visited(100001);
int depth = 0;

void dfs(vector<vector<int>>& vec, vector<int>& ans, int point){
    //방문 체크
    if(visited[point]) return;
    
    //현재 점 방문
    visited[point] = true;

    ans[point] = depth;

    depth++;

    sort(vec[point].begin(), vec[point].end(), greater<int>());

    for(int i = 0; i < vec[point].size(); ++i){
        dfs(vec, ans, vec[point][i]);
    }

    depth--;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M >> R;

    vector<vector<int>> vec(N+1);
    vector<int> ans(N+1, -1);

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