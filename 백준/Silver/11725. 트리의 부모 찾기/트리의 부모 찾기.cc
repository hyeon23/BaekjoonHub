#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int N;
int ans[MAX]; //vector<int> ans(MAX);
bool visited[MAX]; //vector<bool> visited(MAX);
vector<int> v[MAX]; //vector<vector<int>> v(MAX);

//DFS 풀이
void dfs(int k){
    visited[k] = true;//노드 방문 표시
    for(int i = 0; i < v[k].size(); ++i){
        int next = v[k][i];//다음 방문할 노드 받아오기(DFS의 특성에 맞게)
        if(!visited[next]){//방문하지 않은 노드에 한해서
            ans[next] = k;//답안 작성
            dfs(next);//다음 노드 DFS
        }
    }
}

//BFS 풀이
void bfs(){
    queue<int> q;
    visited[1] = true;
    q.push(1);

    while(!q.empty()){
        int parent = q.front();//q의 앞에서부터 하나씩 빼서 사용
        q.pop();//현재 방문한 노드를 q의 뒤에 넣고

        for(int i = 0; i < v[parent].size(); ++i){
            int child = v[parent][i];

            if(!visited[child]){
                ans[child] = parent;
                visited[child] = true;
                q.push(child);
            }
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
    bfs();
    for(int i = 2; i <= N; ++i) cout << ans[i] << '\n';
}