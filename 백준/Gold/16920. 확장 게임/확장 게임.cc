#include <bits/stdc++.h>
using namespace std;
int n, m, p;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> player[10];
int ans[10];
int s[10];
char board[1001][1001];
void bfs(){
    queue<pair<int, int>> Q[10];
    for(int i = 1; i <= p; ++i){
        for(auto castle : player[i]){
            Q[i].push({castle.first, castle.second});
            ans[i]++;
        }
    }
    while(true){
        bool success = false;
        for(int i = 1; i <= p; ++i){
            int s_len = s[i];
            while(!Q[i].empty() && s_len--){
                int Q_size = Q[i].size();
                for(int j = 0; j < Q_size; ++j){
                    auto cur = Q[i].front();
                    Q[i].pop();
                    for(int dir = 0; dir < 4; ++dir){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                        if(board[nx][ny] == '.'){
                            Q[i].push({nx, ny});
                            board[nx][ny] = board[cur.first][cur.second];
                            ans[i]++;
                            success = true;
                        }
                    }
                }
            }
        }
        if(!success) break;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> p;
    for(int i = 1; i <= p; ++i) cin >> s[i];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(board[i][j] != '.' && board[i][j] != '#'){
                player[board[i][j] - '0'].push_back({i, j});
            }
        }
    }
    bfs();
    for(int i = 1; i <= p; ++i) cout << ans[i] << ' ';
    return 0;
}