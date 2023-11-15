#include <bits/stdc++.h>
using namespace std;

int N;
const int MAX = 101;
int input[MAX][MAX];
int m[MAX][MAX];
bool visited[MAX][MAX];
int dy[] = {0, 0, -1, 1};
int dx[] = {-1, 1, 0, 0};
queue<pair<int, int>> q;
vector<int> v;//영역 개수 저장 벡터
int cnt;

void bfs(int x, int y){
    visited[x][y] = true;
    q.push({x, y});

    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;

            if(m[nx][ny] && !visited[nx][ny]){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

void reset(){
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            m[i][j] = 0;
            visited[i][j] = 0;
        }
    }
    cnt = 0;
}

int main(){
    int maxHeight = -1;
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> input[i][j];
            if(input[i][j] > maxHeight) maxHeight = input[i][j];
        }
    }

    for(int h = 1; h <= maxHeight; ++h){
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(input[i][j] < h){
                    m[i][j] = 0;
                }
                else{
                    m[i][j] = 1;
                }
            }
        }

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(m[i][j] && !visited[i][j]){
                    bfs(i, j);
                    ++cnt;
                }
            }
        }
        v.push_back(cnt);
        reset();
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1];
}