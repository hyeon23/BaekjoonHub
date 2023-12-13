#include <bits/stdc++.h>
using namespace std;
int N, M, H, ans = -1;
struct Transform{
    int x;
    int y;
    int z;
};
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
vector<vector<vector<int>>> board(101, vector<vector<int>>(101, vector<int>(101, -1)));
bool visited[101][101][101] = {false,};

queue<Transform> que;
void bfs(){
    while(!que.empty()){
        Transform t = que.front();
        que.pop();
        for(int i = 0; i < 6; ++i){
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            int nz = t.z + dz[i];

            if(nx < 0 || ny < 0 || nz < 0 || nx >= H || ny >= N || nz >= M) continue;
            if(visited[nx][ny][nz] || board[nx][ny][nz] == -1 || board[nx][ny][nz] == 1) continue;

            visited[nx][ny][nz] = true;
            board[nx][ny][nz] = board[t.x][t.y][t.z]+1;
            que.push({nx, ny, nz});
        }
    }
}
//board check : 0이 남아있으면 -1 출력 / 그렇지 않으면 최댓값 - 1 출력
int boardcheck(){
    int m = 0;
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < N; ++j){
            for(int k = 0; k < M; ++k){
                if(board[i][j][k] == 0) return -1;
                m = max(m, board[i][j][k]);
            }
        }
    }
    return m-1;
}
int main(){
    //6방향 bfs 수행
    cin >> M >> N >> H;
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < N; ++j){
            for(int k = 0; k < M; ++k){
                cin >> board[i][j][k];
                if(board[i][j][k] == 1) { 
                    que.push({i, j, k});
                    visited[i][j][k] = true;
                }
            }
        }
    }
    bfs();
    cout << boardcheck();
    return 0;
}