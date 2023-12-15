#include <bits/stdc++.h>
using namespace std;
int N;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<int>> board(101, vector<int>(101, 0));
vector<vector<bool>> visited(101, vector<bool>(101, false));
vector<vector<pair<int, int>>> ans;
void bfs(int x, int y){
    queue<pair<int, int>> que;
    vector<pair<int, int>> vec;
    visited[x][y] = true;
    que.push({x, y});
    while(!que.empty()){
        int cx = que.front().first;
        int cy = que.front().second;
        vec.push_back({cx, cy});
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visited[nx][ny] || board[nx][ny] == 0) continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
    ans.push_back(vec);
}
int main(){
    int dist = INT_MAX; 
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(board[i][j] != 0 && !visited[i][j]) {
                bfs(i, j);//각 대륙의 점을 저장 후 각개비교?
            }
        }
    }
    for(int i = 0; i < ans.size(); ++i){
        for(int j = i+1; j < ans.size(); ++j){
            for(int k = 0; k < ans[i].size(); ++k){
                for(int l = 0; l < ans[j].size(); ++l){
                    dist = min(dist, abs(ans[i][k].first - ans[j][l].first) + abs(ans[i][k].second - ans[j][l].second));
                }
            }
        }
    }
    cout << dist-1;
    return 0;
}