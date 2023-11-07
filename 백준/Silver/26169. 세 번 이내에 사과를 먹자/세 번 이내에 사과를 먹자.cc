#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

vector<vector<int>> board(5, vector<int>(5));
vector<vector<int>> cost(5, vector<int>(5, 0));

bool ans;

void DFS(pair<int, int> curPos, int depth){
    int temp = board[curPos.x][curPos.y];
    if(depth == 3){
        if(cost[curPos.x][curPos.y] >= 2){
            ans = true;
        }
    }
    else{
        for(int i = 0; i < 4; ++i){
            int nx = curPos.x + dx[i];
            int ny = curPos.y + dy[i];

            if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;

            if(board[nx][ny] == -1) continue;

            if(board[nx][ny] == 1) cost[nx][ny] = max(cost[nx][ny], cost[curPos.x][curPos.y]+1);
            else cost[nx][ny] = max(cost[nx][ny], cost[curPos.x][curPos.y]);
            board[curPos.x][curPos.y] = -1;
            DFS({nx, ny}, depth+1);
        }
    }
}

int main(){
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> board[i][j];
        }
    }

    pair<int, int> curPos;
    
    cin >> curPos.first >> curPos.second;

    DFS(curPos, 0);

    cout << ans;
}