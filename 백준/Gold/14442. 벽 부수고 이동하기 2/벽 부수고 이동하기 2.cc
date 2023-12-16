#include <bits/stdc++.h>
using namespace std;
int N, M, K, ans = INT_MAX;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<char>> board(1001, vector<char>(1001, 1));
vector<vector<vector<bool>>> visited(1001, vector<vector<bool>>(1001, vector<bool>(11, false)));
struct DATA{
    int x;
    int y;
    int cnt;
    int k;
};
void bfs(int x, int y){
    queue<DATA> que;
    visited[x][y][0] = true;
    que.push({x, y, 0, 0});
    while(!que.empty()){
        DATA cur = que.front();
        que.pop();
        if(cur.x == N-1 && cur.y == M-1){//answer!
            ans = min(ans, cur.cnt);
            break;
        }
        for(int i = 0; i < 4; ++i){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(board[nx][ny] == '1'){//벽이라면
                if(visited[nx][ny][cur.k+1]) continue;
                if(cur.k >= K) continue;
                visited[nx][ny][cur.k+1] = true;
                que.push({nx, ny, cur.cnt+1, cur.k+1});
            }
            else{
                if(visited[nx][ny][cur.k]) continue;
                visited[nx][ny][cur.k] = true;
                que.push({nx, ny, cur.cnt+1, cur.k});
            }
        }
    }
}
int main(){
    cin >> N >> M >> K;
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            cin >> board[i][j];
    bfs(0, 0);
    if(ans == INT_MAX) cout << -1;
    else cout << ans+1;
    return 0;
}