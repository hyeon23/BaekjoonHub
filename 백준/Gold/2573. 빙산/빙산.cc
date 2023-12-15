#include <bits/stdc++.h>
using namespace std;
int N, M;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<int>> board(301, vector<int>(301, 0));
vector<vector<bool>> visited(301, vector<bool>(301, false));
bool all_melt(){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(board[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
void dfs(int x, int y){
    stack<pair<int, int>> stk;
    visited[x][y] = true;
    stk.push({x, y});
    while(!stk.empty()){
        pair<int, int> cur = stk.top();
        stk.pop();
        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(visited[nx][ny] || board[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            stk.push({nx, ny});
        }
    }
}
int main(){
    int year = 0;
    bool trigger = false;
    cin >> N >> M;
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            cin >> board[i][j];
    while(!all_melt()){
        //DFS 체크
        int part = 0;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(board[i][j] != 0 && !visited[i][j]) { 
                    ++part;
                    dfs(i, j);
                    if(part >= 2) {
                        trigger = true;
                        break;
                    }
                }
            }
            if(trigger) break;
        }
        if(trigger) break;
        year++;//년도 증가
        //빙하 감소
        vector<vector<int>> mcnt(N, vector<int>(M, 0));
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(board[i][j] > 0) {
                    int cnt = 0;
                    for(int k = 0; k < 4; ++k) {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(board[nx][ny] == 0) ++cnt;
                    }
                    mcnt[i][j] = cnt;
                }
            }
        }
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                board[i][j] = max(board[i][j] - mcnt[i][j], 0);
            }
        }
        //배열 초기화
        for(int i = 0; i < N; ++i)
            for(int j = 0; j < M; ++j)
                visited[i][j] = false;
    }
    if(trigger) cout << year;
    else cout << 0;
    return 0;
}