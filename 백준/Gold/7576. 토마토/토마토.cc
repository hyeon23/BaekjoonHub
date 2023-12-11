#include <bits/stdc++.h>
using namespace std;
int N, M, day = 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int board[1001][1001] = {0, };
bool visited[1001][1001] = {false, };

struct DATA{
    int x;
    int y;
    int d;
};

bool isfull(){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(board[i][j] == 0) return false;
        }
    }
    return true;
}

void bfs(vector<pair<int, int>>& pos){
    queue<DATA> que;
    for(int i = 0; i < pos.size(); ++i){
        que.push({pos[i].first, pos[i].second, day});
        visited[pos[i].first][pos[i].second] = true;
    }
    while(!que.empty()){
        int cx = que.front().x;
        int cy = que.front().y;
        int D = que.front().d;
        day = max(day, D);
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(board[nx][ny] == -1 || board[nx][ny] == 1 || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            board[nx][ny] = 1;
            que.push({nx, ny, D+1});
        }
    }
}

int main(){
    vector<pair<int, int>> pos;
    cin >> M >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> board[i][j];
            if(board[i][j] == 1) pos.push_back({i, j});
        }
    }
    bfs(pos);
    if(isfull()) cout << day;
    else cout << -1;

    return 0;
}