#include <bits/stdc++.h>
using namespace std;

vector<vector<long long>> vvec(100001);
vector<bool> visited(100001);
vector<pair<long long, long long>> ans(100001, {-1, 0});
long long depth = 0;
long long rnk = 1;

void dfs(long long cur){
    if(visited[cur]) return;

    visited[cur] = true;
    ans[cur].first = depth;
    ans[cur].second = rnk;

    depth++;
    rnk++;

    for(int i = 0; i < vvec[cur].size(); ++i){
        dfs(vvec[cur][i]);
    }

    depth--;
}


int main(){
    long long N, M, R, u, v;
    cin >> N >> M >> R;

    for(long long i = 1; i <= M; ++i){
        cin >> u >> v;
        vvec[u].push_back(v);
        vvec[v].push_back(u);
    }

    for(long long i = 1; i <= N; ++i){
        sort(vvec[i].begin(), vvec[i].end(), greater<int>());
    }

    dfs(R);

    long long sum = 0;

    for(long long i = 1; i <= N; ++i){
        sum += ans[i].first * ans[i].second;
    }

    cout << sum;

    return 0;
}