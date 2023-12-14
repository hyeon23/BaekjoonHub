#include <bits/stdc++.h>
using namespace std;
int N, M, K, cnt = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[101][101] = {0,};
bool visited[101][101] = {false,};
vector<int> ans;
void bfs(pair<int, int> cur){
    int a = 0;
    queue<pair<int, int>> que;
    visited[cur.first][cur.second] = true;
    que.push(cur);
    while(!que.empty()){
        ++a;
        int cx = que.front().first;
        int cy = que.front().second;
        que.pop();
        for(int i = 0; i < 4; ++i){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(visited[nx][ny] || board[nx][ny] == 1) continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
    ans.push_back(a);
}
int main(){
    //영역의 개수 & 각 영역의 넓이 출력
    cin >> N >> M >> K;
    int lx, ly, rx, ry;
    for(int i = 0; i < K; ++i){
        //왼쪽 아래 x, y, 오른쪽 위 x, y
        cin >> lx >> ly >> rx >> ry;

        for(int j = ly; j < ry; ++j){
            for(int k = lx; k < rx; ++k){
                board[j][k] = 1;
            }
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(!visited[i][j] && board[i][j] == 0){
                ++cnt;
                visited[i][j] = true;
                bfs({i, j});
                
            }
        }
    }
    cout << cnt << '\n';
    sort(ans.begin(), ans.end());
    for(auto i : ans) cout << i << ' ';
    return 0;
}