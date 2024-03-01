#include <bits/stdc++.h>
using namespace std;
int N, K, ans = INT_MAX, ansidx = 0;
vector<int> visited(100001, -1);
struct DATA{
    int x;
    int cnt;
};
void bfs(int n){
    queue<DATA> que;
    visited[n] = -2;
    que.push({n, 0});
    while(!que.empty()){
        DATA cur = que.front();
        if(cur.x == K){
            ans = cur.cnt;
            ansidx = cur.x;
            break;
        }
        que.pop();
        int nx;
        int nc;
        nx = cur.x + 1;
        nc = cur.cnt + 1;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc});
        }
        nx = cur.x - 1;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc});
        }
        nx = cur.x * 2;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc});
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> K;
    bfs(N);
    cout << ans << '\n';
    deque<int> ansdeq;
    ansdeq.push_front(K);
    while(visited[ansidx] != -2){
        ansdeq.push_front(visited[ansidx]);
        ansidx = visited[ansidx];
    }
    for(auto i : ansdeq) cout << i << ' ';
    return 0;
}