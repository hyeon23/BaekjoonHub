//DFS 풀이
#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int N;
vector<int> arr(MAX);
vector<bool> visited(MAX);
vector<vector<int>> v(MAX);

void dfs(int k){
    visited[k] = true;//노드 방문 표시
    for(int i = 0; i < v[k].size(); ++i){
        int next = v[k][i];//다음 방문할 노드 받아오기(DFS의 특성에 맞게)
        if(!visited[next]){//방문하지 않은 노드에 한해서
            arr[next] = k;//답안 작성
            dfs(next);//다음 노드 DFS
        }
    }
}

int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i = 2; i <= N; ++i) cout << arr[i] << '\n';
}