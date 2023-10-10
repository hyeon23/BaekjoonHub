#include <bits/stdc++.h>
using namespace std;

int arr[5][5], answer = 0;
bool visited[1000001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(pair<int, int> cur, int sum, int cnt){

    if(cnt == 5){
        if(visited[sum] == false){
            visited[sum] = true;
            ++answer;
        }
        return;
    }

    for(int i = 0; i < 4; ++i){
        int nx = cur.first + dx[i];
        int ny = cur.second + dy[i];
        if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;

        dfs({nx, ny}, sum * 10 + arr[nx][ny], cnt + 1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            dfs({i, j}, arr[i][j], 0);
        }
    }

    cout << answer << '\n';

    return 0;
}