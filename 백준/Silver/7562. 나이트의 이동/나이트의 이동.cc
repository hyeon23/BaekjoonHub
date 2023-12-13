#include <bits/stdc++.h>
using namespace std;

int T, I, ans = 0;
pair<int, int> cur;
pair<int, int> target;
int dx[8] = {1, 2, 1, 2, -1, -2, -1, -2};
int dy[8] = {2, 1, -2, -1, 2, 1, -2, -1};

struct DATA{
    int x;
    int y;
    int c;
};
void bfs(int cnt){
    bool visited[301][301] = {false,};
    queue<DATA> que;
    visited[cur.first][cur.second] = true;
    que.push({cur.first, cur.second, 0});
    while(!que.empty()){
        DATA cur = que.front();
        if(cur.x == target.first && cur.y == target.second) {
            ans = cur.c;
            return;
        }
        que.pop();
        for(int i = 0; i < 8; ++i){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if(nx < 0 || ny < 0 || nx >= I || ny >= I) continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny] = true;
            que.push({nx, ny, cur.c+1});
        }
    }
}
int main(){
    cin >> T;
    while(T--){
        cin >> I;
        cin >> cur.first >> cur.second;
        cin >> target.first >> target.second;
        bfs(0);
        cout << ans << '\n';
    }
    return 0;
}