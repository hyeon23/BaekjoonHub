#include <bits/stdc++.h>
using namespace std;
int N;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char board[26][26] = {0,};
bool visited[26][26] = {false,};
vector<int> ans;
void bfs(pair<int, int> cur){
    int answer = 0;
    stack<pair<int, int>> stk;
    stk.push(cur);
    while(!stk.empty()){
        int cx = stk.top().first;
        int cy = stk.top().second;
        stk.pop();
        ++answer;
        for(int i = 0; i < 4; ++i){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visited[nx][ny] || board[nx][ny] == '0') continue;
            visited[nx][ny] = true;
            stk.push({nx, ny});
        }
    }
    ans.push_back(answer);
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(!visited[i][j] && board[i][j] == '1') {
                visited[i][j] = true;
                bfs({i, j});
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto i : ans){
        cout << i << '\n';
    }
    return 0;
}