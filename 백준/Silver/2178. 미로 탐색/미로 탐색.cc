// #include <bits/stdc++.h>
// using namespace std;
// int N, M, ans = 101 * 101;
// int dx[4] = {0, 1, 0, -1};
// int dy[4] = {1, 0, -1, 0};
// char board[101][101] = {'0', };
// bool visited[101][101] = {false, };
// void dfs(int x, int y, int cnt){
//     if(x == N-1 && y == M-1) { 
//         ans = min(ans, cnt);
//         return;
//     }
//     visited[x][y] = true;
//     for(int i = 0; i < 4; ++i){
//         int nx = x + dx[i];
//         int ny = y + dy[i];
//         if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
//         if(board[nx][ny] == '0' || visited[nx][ny]) continue;
//         dfs(nx, ny, cnt+1);
//     }
//     visited[x][y] = false;
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> N >> M;
//     for(int i = 0; i < N; ++i){
//         for(int j = 0; j < M; ++j){
//             cin >> board[i][j];
//         }
//     }
//     dfs(0, 0, 1);
//     cout << ans;
// }

#include <bits/stdc++.h>
using namespace std;

struct DATA{
    int x;
    int y;
    int cnt;
};

int N, M, ans = 101 * 101;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char board[101][101] = {'0', };
bool visited[101][101] = {false, };
void bfs(int x, int y, int cnt){
    queue<DATA> que;
    que.push({x, y, cnt});
    visited[x][y] = true;

    while(!que.empty()){
        DATA fr = que.front();
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = fr.x + dx[i];
            int ny = fr.y + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(board[nx][ny] == '0' || visited[nx][ny]) continue;
            if(nx == N-1 && ny == M-1) { 
                ans = min(ans, fr.cnt+1);
                continue;
            }
            visited[nx][ny] = true;
            que.push({nx, ny, fr.cnt+1});
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> board[i][j];
        }
    }
    bfs(0, 0, 1);
    cout << ans;
}