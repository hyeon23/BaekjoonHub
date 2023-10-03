#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, 0, 1, 0, 1, -1, 1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

int w, h;

void dfs(vector<vector<int>>& arr, vector<vector<bool>>& visited, int x, int y) {
    visited[x][y] = true;
    
    for (int k = 0; k < 8; ++k) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && ny >= 0 && nx < h && ny < w && !visited[nx][ny] && arr[nx][ny] == 1) {
            dfs(arr, visited, nx, ny);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while (cin >> w >> h) {
        if (w == 0 || h == 0) break;

        int cnt = 0;
        
        vector<vector<int>> arr(h, vector<int>(w));
        vector<vector<bool>> visited(h, vector<bool>(w, false));

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (!visited[i][j] && arr[i][j] == 1) {
                    ++cnt;
                    dfs(arr, visited, i, j);
                }
            }
        }

        cout << cnt << '\n';
    }
    
    return 0;
}