#include <bits/stdc++.h>
#define MAX 51
using namespace std;
//거리구하기 탐색 = BFS

int R, C;
vector<vector<char>> board(MAX, vector<char>(MAX));
vector<vector<bool>> visited(MAX, vector<bool>(MAX));
vector<vector<int>> path(MAX, vector<int>(MAX));

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int max_len = 0;

int BFS(int x, int y){
    queue<pair<int, int>> q;
    path[x][y] = 1;
    visited[x][y] = true;
    q.push({x, y});
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            if(board[nx][ny] == 'L' && !visited[nx][ny]){
                visited[nx][ny] = true;
                path[nx][ny] = path[x][y] + 1;
                q.push({nx, ny});
                max_len = max(max_len, path[nx][ny]);
            }
        }
    }
    return max_len-1;
}

void reset(){
    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            visited[i][j] = false;//방문 여부 초기화
            path[i][j] = 0;//거리 초기화
        }
    }
}

int main(){
    cin >> R >> C;
    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            cin >> board[i][j];
        }
    }

    int ans = 0;

    //모든 L에 대해 BFS 실행 -> 최댓값 = 정답
    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            if(board[i][j] == 'L'){
                ans = max(ans, BFS(i, j));
            }
            reset();
        }
    }
    cout << ans;
}