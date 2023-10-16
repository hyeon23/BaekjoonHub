#include <bits/stdc++.h>
using namespace std;

int H, W;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(pair<int, int> cur, vector<vector<char>>& vvec, vector<vector<bool>>& visited){
    queue<pair<int, int>> que;

    visited[cur.first][cur.second] = true;
    que.push(cur);

    while(!que.empty()){
        pair<int, int> curpos = que.front();
        que.pop();

        for(int i = 0; i < 4; ++i){
            int nx = curpos.first + dx[i];
            int ny = curpos.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;

            if(visited[nx][ny] || vvec[nx][ny] == '.') continue;

            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
}

int main(){
    //# 양, .풀

    int T;
    cin >> T;

    while(T--){
        int cnt = 0;

        cin >> H >> W;
        
        vector<vector<char>> vvec(101, vector<char>(101));
        vector<vector<bool>> visited(101, vector<bool>(101, false));

        for(int i = 0; i < H; ++i){
            for(int j = 0; j < W; ++j){
                cin >> vvec[i][j];
            }
        }

        for(int i = 0; i < H; ++i){
            for(int j = 0; j < W; ++j){
                if(!visited[i][j] && vvec[i][j] == '#'){
                    bfs({i, j}, vvec, visited);
                    ++cnt;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}