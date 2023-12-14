#include <bits/stdc++.h>
using namespace std;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, 0, -1, 0};
int dz[6] = {0, 0, 0, 1, 0, -1};
struct Transform{
    int x;
    int y;
    int z;
    int cnt;
};
int main(){
    //#: 벽, .: 빈칸, S: 시작지점, E: 탈출구
    while(true){
        int L, R, C;
        Transform start;
        Transform exit;
        cin >> L >> R >> C;
        if(L == 0 && R == 0 && C == 0) break;
        vector<vector<vector<char>>> board(31, vector<vector<char>>(31, vector<char>(31, '#')));
        bool visited[31][31][31] = {false,};
        for(int i = 0; i < L; ++i){
            for(int j = 0; j < R; ++j){
                for(int k = 0; k < C; ++k){
                    cin >> board[i][j][k];
                    if(board[i][j][k] == 'S'){
                        start = {i, j, k};
                    }
                    else if(board[i][j][k] == 'E'){
                        exit = {i, j, k};
                    }
                }
            }
        }
        queue<Transform> que;
        visited[start.x][start.y][start.z] = true;
        que.push({start.x, start.y, start.z, 0});
        bool trigger = false;
        while(!que.empty()){
            Transform cur = que.front();
            if((cur.x == exit.x) && (cur.y == exit.y) && (cur.z == exit.z)){
                cout << "Escaped in " << cur.cnt << " minute(s).\n";
                trigger = true;
                break;
            }
            que.pop();
            for(int i = 0; i < 6; ++i){
                int nx = cur.x + dx[i];
                int ny = cur.y + dy[i];
                int nz = cur.z + dz[i];
                if(nx < 0 || ny < 0 || nz < 0 || nx >= L || ny >= R || nz >= C) continue;
                if(visited[nx][ny][nz] || board[nx][ny][nz] == '#') continue;
                visited[nx][ny][nz] = true;
                que.push({nx, ny, nz, cur.cnt+1});
            }
        }
        if(!trigger) cout << "Trapped!\n";
    }
    return 0;
}