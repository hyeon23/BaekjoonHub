#include <bits/stdc++.h>
using namespace std;

int N, M, ans = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<vector<char>> cvec(601, vector<char>(601, '_'));
vector<vector<bool>> visited(601, vector<bool>(601, false));

void dfs(pair<int, int> curpos){
    stack<pair<int, int>> stk;

    visited[curpos.first][curpos.second] = true;

    stk.push(curpos);

    while(!stk.empty()){
        pair<int, int> cur = stk.top();
        stk.pop();

        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

            if(cvec[nx][ny] == 'X' || visited[nx][ny]) continue;

            if(cvec[nx][ny] == 'P'){
                cvec[nx][ny] = 'O';
                ++ans;
            }

            visited[nx][ny] = true;
            stk.push({nx, ny});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //N X M 크기 캠퍼스 이동 방법 -> 벽이 아닌 상하좌우 이동
    cin >> N >> M;

    char tmp;
    pair<int, int> cur = {0, 0};

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> tmp;

            if(tmp == 'I') { 
                cur = {i, j};
                cvec[i][j] = 'O';
            }
            else cvec[i][j] = tmp;
        }
    }  

    //O: 빈공간, X: 벽, I, 도연, P: 사람

    dfs(cur);

    (ans == 0) ? cout << "TT" : cout << ans;

    return 0;
}