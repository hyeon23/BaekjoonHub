#include <bits/stdc++.h>
using namespace std;

int N, cntN = 0, cntAb = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char boardN[101][101];
char boardAb[101][101];
bool visitedN[101][101] = {false,};
bool visitedAb[101][101] = {false,};

void bfs(pair<int, int> curpos, int type){
    queue<pair<int, int>> que;
    que.push(curpos);
    if(type == 0) visitedN[curpos.first][curpos.second] = true;
    else if(type == 1) visitedAb[curpos.first][curpos.second] = true;
    while(!que.empty()){
        pair<int, int> cur = que.front();
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;

            if(type == 0){
                if(visitedN[nx][ny] || boardN[cur.first][cur.second] != boardN[nx][ny]) continue;
                visitedN[nx][ny] = true;
            }
            else if(type == 1){
                if(visitedAb[nx][ny] || boardAb[cur.first][cur.second] != boardAb[nx][ny]) continue;
                visitedAb[nx][ny] = true;
            }
            que.push({nx, ny});
        }
    }
}

int main(){
    char tmp;
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> tmp;
            boardN[i][j] = tmp;
            if(tmp == 'G') tmp = 'R';
            boardAb[i][j] = tmp;
        }
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            //정상인에 대한 탐색
            if(!visitedN[i][j]) {
                ++cntN;
                bfs({i, j}, 0);
            }
            //적녹색약에 대한 탐색
            if(!visitedAb[i][j]){
                ++cntAb;
                bfs({i, j}, 1);
            }
        }
    }
    cout << cntN << ' ' << cntAb;
    return 0;
}