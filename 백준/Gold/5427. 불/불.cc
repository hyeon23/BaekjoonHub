#include <bits/stdc++.h>
using namespace std;
int T, w, h, ans = -1;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> queS;
queue<pair<int, int>> queF;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char tmp;
    cin >> T;
    while(T--){
        vector<vector<int>> boardS(1001, vector<int>(1001, -1));
        vector<vector<int>> boardF(1001, vector<int>(1001, -1));
        vector<vector<bool>> visitedS(1001, vector<bool>(1001, false));
        vector<vector<bool>> visitedF(1001, vector<bool>(1001, false));
        cin >> w >> h;
        ans = INT_MAX;
        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                cin >> tmp;
                if(tmp == '#') {//벽
                    boardS[i][j] = -1;
                    boardF[i][j] = -1;
                }
                else if(tmp == '*'){//불
                    visitedF[i][j] = true;
                    boardS[i][j] = 0;
                    boardF[i][j] = 1;
                    queF.push({i, j});
                }
                else if(tmp == '.'){//빈칸
                    boardS[i][j] = 0;
                    boardF[i][j] = 0;
                }
                else if(tmp == '@'){//상근
                    visitedS[i][j] = true;
                    boardS[i][j] = 1;
                    boardF[i][j] = 0;
                    queS.push({i, j});
                }
            }
        }
        //BFS F
        while(!queF.empty()){
            pair<int, int> f = queF.front();
            queF.pop();
            for(int i = 0; i < 4; ++i){
                int nx = f.first + dx[i];
                int ny = f.second + dy[i];
                if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
                if(visitedF[nx][ny] || boardF[nx][ny] == -1 || boardF[nx][ny] > 0) continue;
                visitedF[nx][ny] = true;
                boardF[nx][ny] = boardF[f.first][f.second] + 1;
                queF.push({nx, ny});
            }
        }
        //BFS S
        while(!queS.empty()){
            pair<int, int> f = queS.front();
            queS.pop();
            if(f.first == 0 || f.second == 0 || f.first == h-1 || f.second == w-1) {//탈출 성공
                if(boardF[f.first][f.second] == 0 || boardS[f.first][f.second] + 1 <= boardF[f.first][f.second]) ans = min(ans, boardS[f.first][f.second]);
            }
            for(int i = 0; i < 4; ++i){
                int nx = f.first + dx[i];
                int ny = f.second + dy[i];
                if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
                if(visitedS[nx][ny] || boardS[nx][ny] == -1 || boardS[nx][ny] > 0) continue;
                visitedS[nx][ny] = true;
                boardS[nx][ny] = boardS[f.first][f.second] + 1;
                queS.push({nx, ny});
            }
        }
        if(ans == INT_MAX) cout << "IMPOSSIBLE" << '\n';
        else cout << ans << '\n';
    }
    return 0;
}