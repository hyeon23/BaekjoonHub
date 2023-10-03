#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int T;
    cin >> T;

    while(T--){
        int M, N, K;
        cin >> M >> N >> K;

        vector<vector<int>> ground(N, vector<int>(M, 0));
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        
        for(int i = 0; i < K; ++i){
            int x, y;
            cin >> x >> y;
            ground[y][x] = 1;
        }

        int cnt = 0;

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(ground[i][j] == 1 && !visited[i][j]){
                    ++cnt;

                    stack<pair<int, int>> stk;

                    visited[i][j] = true;

                    stk.push({i, j});

                    while(!stk.empty()){
                        pair<int, int> cur = stk.top();
                        stk.pop();

                        for(int k = 0; k < 4; ++k){
                            int nx = cur.first + dx[k];
                            int ny = cur.second + dy[k];

                            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                            if(visited[nx][ny] || ground[nx][ny] == 0) continue;

                            visited[nx][ny] = true;
                            stk.push({nx, ny});
                        }
                    }
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}