#include <bits/stdc++.h>
using namespace std;

int N, M;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

string ans = "NO";

vector<vector<int>> arr(1001, vector<int>(1001, 0));
vector<vector<bool>> visited(1001, vector<bool>(1001, false));

void dfs(pair<int, int> cur){//해당 위치에서 탐색 시작
    stack<pair<int, int>> stk;

    visited[cur.first][cur.second] = true;

    stk.push(cur);

    while(!stk.empty()){
        pair<int, int> curnode = stk.top();
        stk.pop();

        for(int i = 0; i < 4; ++i){
            int nx = curnode.first + dx[i];
            int ny = curnode.second + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

            if(visited[nx][ny] == true || arr[nx][ny] == 1) continue;

            if(nx == N-1) {
                ans = "YES";
                return;
            }

            visited[nx][ny] = true;
            stk.push({nx, ny});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;

    string tmp;

    for(int i = 0; i < N; ++i){
        cin >> tmp;
        for(int j = 0; j < tmp.size(); ++j){
            arr[i][j] = tmp[j] - '0';
        }
    }

    for(int i = 0; i < M; ++i){
        if(visited[0][i] == false && arr[0][i] == 0){
            dfs({0, i});//바깥쪽 시작 위치 설정
        }
    }

    cout << ans;

    return 0;
}