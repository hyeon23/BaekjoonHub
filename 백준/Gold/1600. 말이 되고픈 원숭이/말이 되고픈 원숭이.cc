#include <bits/stdc++.h>
using namespace std;
int K, W, H, ans = INT_MAX;
int hx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int hy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<int>> board(201, vector<int>(201, 1));
vector<vector<vector<bool>>> visited(201, vector<vector<bool>>(201, vector<bool>(31, false)));
struct DATA{
    int x;
    int y;
    int num;
    int cnt;
};
void bfs(int x, int y){
    queue<DATA> que;
    visited[x][y][0] = true;
    que.push({x, y, 0, 0});
    while(!que.empty()){
        DATA f = que.front();
        que.pop();
        if(f.x == H-1 && f.y == W-1){
            ans = min(ans, f.cnt);
        }
        else{
            if(f.num < K){//위 방식
                for(int i = 0; i < 8; ++i){
                    int nx = f.x + hx[i];
                    int ny = f.y + hy[i];
                    if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                    if(visited[nx][ny][f.num+1] || board[nx][ny] == 1) continue;
                    visited[nx][ny][f.num+1] = true;
                    que.push({nx, ny, f.num+1, f.cnt+1});
                }
            }
            //기본 방식 이동
            for(int i = 0; i < 4; ++i){
                int nx = f.x + dx[i];
                int ny = f.y + dy[i];
                if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                if(visited[nx][ny][f.num] || board[nx][ny] == 1) continue;
                visited[nx][ny][f.num] = true;
                que.push({nx, ny, f.num, f.cnt+1});
            }
        }
    }

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> K >> W >> H;
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            cin >> board[i][j];
        }
    }
    bfs(0, 0);
    if(ans != INT_MAX) cout << ans;
    else cout << -1;
    return 0;
}