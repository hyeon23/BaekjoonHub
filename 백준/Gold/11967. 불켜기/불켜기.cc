#include <bits/stdc++.h>
using namespace std;
int N, M, ans = 0;
int board[101][101]; // (i, j) 불 켜짐 체크
bool visited[101][101]; // (i, j) 방문 체크
vector<pair<int, int>> adj[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
bool is_connected(pair<int, int> next){//(1, 1)에서 next가 도달 가능한 칸인가?
    for(int i = 0; i < 4; ++i){
        int nx = next.first + dx[i];
        int ny = next.second + dy[i];
        if(nx < 1 || ny < 1 || nx > N || ny > N) continue;
        if(visited[nx][ny]) return true;
    }
    return false;
}
void bfs(){
    queue<pair<int, int>> que;
    board[1][1] = 1;//시작지점 Light On
    visited[1][1] = true;//시작지점 방문 체크
    que.push({1, 1});
    while(!que.empty()){
        auto cur = que.front();
        que.pop();
        //현재 방문 지점에서 불을 켤 수 있는 곳 다 켜기
        for(auto next : adj[cur.first][cur.second]){
            if(visited[next.first][next.second]) continue;//
            if(is_connected(next)){//연결되어있다면
                visited[next.first][next.second] = true;
                que.push({next.first, next.second});
            }
            board[next.first][next.second] = 1;//불 켜기
        }
        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 1 || ny < 1 || nx > N || ny > N || visited[nx][ny] || board[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    while(M--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        adj[x1][y1].push_back({x2, y2});
    }
    bfs();
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= N; ++j){
            ans += board[i][j];
        }
    }
    cout << ans;
}
