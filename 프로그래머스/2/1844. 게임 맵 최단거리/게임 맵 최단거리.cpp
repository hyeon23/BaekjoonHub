#include <queue>
#include <vector>
using namespace std;

int bfs(vector<vector<int>>& maps, pair<int, int> start) {
    int csize = maps.size();
    int rsize = maps[0].size();
    vector<vector<bool>> visited(csize, vector<bool>(rsize, false));

    queue<pair<int, int>> q;
    q.push(start);

    int answer = 0;
    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            pair<int, int> pos = q.front();
            q.pop();

            int x = pos.first;
            int y = pos.second;

            if (x == csize - 1 && y == rsize - 1) {
                return answer + 1;
            }

            if (visited[x][y]) {
                continue;
            }

            visited[x][y] = true;

            for (int dir = 0; dir < 4; dir++) {
                int nx = x + dr[dir];
                int ny = y + dc[dir];

                if (nx >= 0 && nx < csize && ny >= 0 && ny < rsize && maps[nx][ny] == 1 && !visited[nx][ny]) {
                    q.push({nx, ny});
                }
            }
        }
        answer++;
    }

    return -1; // 도착점에 도달하지 못한 경우
}

int solution(vector<vector<int>> maps) {
    pair<int, int> start = {0, 0};
    return bfs(maps, start);
}