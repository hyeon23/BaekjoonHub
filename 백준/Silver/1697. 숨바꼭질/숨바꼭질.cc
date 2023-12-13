#include <bits/stdc++.h>
using namespace std;

vector<int> dot(100001, 0);
int N, K;
int dx[2] = {-1, 1};

void bfs(int cur, int num){
    queue<pair<int, int>> q;
    dot[cur] = 1;
    q.push({cur, 0});

    while(!q.empty()){
        int cx = q.front().first;
        int cn = q.front().second;

        if(cx == K){
            cout << cn;
            return;
        }

        q.pop();
        if(cx == K){
            cout << dot[cx];
            return;
        }
        int nx;
        for(int i = 0; i < 3; ++i){
            //+1 이동 -1 이동
            if(i != 2){
                nx = cx + dx[i];
                if(nx < 0 || nx >= 100001) continue;
                if(dot[nx] == 1) continue;
                dot[nx] = 1;
                q.push({nx, cn+1});
            }
            else{
                //순간이동
                nx = cx * 2;
                if(nx < 0 || nx >= 100001) continue;
                if(dot[nx] == 1) continue;
                dot[nx] = 1;
                q.push({nx, cn+1});
            }
        }
    }
    return;
}

int main(){
    cin >> N >> K;
    bfs(N, 0);
    return 0;
}