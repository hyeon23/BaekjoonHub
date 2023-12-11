#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[501][501];
bool visited[501][501];
//우, 상, 좌, 하
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }
    int mx = 0, cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(arr[i][j] == 0 || visited[i][j]) continue;
            ++cnt;
            queue<pair<int, int>> q;
            visited[i][j] = true;
            q.push({i, j});
            int area = 0;
            while(!q.empty()){
                ++area;
                pair<int, int> cur = q.front();
                q.pop();
                for(int dir = 0; dir < 4; ++dir){
                    int nX = cur.first + dx[dir];
                    int nY = cur.second + dy[dir];
                    if(nX < 0 || nX >= n || nY < 0 || nY >= m) continue;//범위 밖 접근
                    if(arr[nX][nY] == 0 || visited[nX][nY]) continue;//원치 않는 값 or 이미 방문한 값
                    visited[nX][nY] = true;
                    q.push({nX, nY});
                }
            }    
            mx = max(mx, area);
        }
    }
    cout << cnt << '\n' << mx;
    return 0;
}