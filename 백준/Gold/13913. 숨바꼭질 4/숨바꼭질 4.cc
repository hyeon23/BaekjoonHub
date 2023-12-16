// #include <bits/stdc++.h>
// using namespace std;
// int N, K, ans = INT_MAX;
// vector<int> ansvec;
// bool visited[100001] = {false,};

// struct DATA{
//     int x;
//     int cnt;
//     vector<int> root;
// };
// void bfs(int n){
//     queue<DATA> que;
//     vector<int> vec;
//     vec.push_back(n);
//     visited[n] = true;
//     que.push({n, 0, vec});
//     while(!que.empty()){
//         DATA cur = que.front();
//         if(cur.x == K){
//             ansvec = cur.root;
//             ans = cur.cnt;
//             break;
//         }
//         que.pop();
//         int nx;
//         int nc;
//         vector<int> tmp1 = cur.root;
//         nx = cur.x + 1;
//         nc = cur.cnt;
//         if(!(nx < 0 || nx >= 100001 || visited[nx])) {
//             visited[nx] = true;
//             tmp1.push_back(nx);
//             que.push({nx, nc+1, tmp1});
//         }
//         vector<int> tmp2 = cur.root;
//         nx = cur.x - 1;
//         if(!(nx < 0 || nx >= 100001 || visited[nx])) {
//             visited[nx] = true;
//             tmp2.push_back(nx);
//             que.push({nx, nc+1, tmp2});
//         }
//         vector<int> tmp3 = cur.root;
//         nx = cur.x * 2;
//         if(!(nx < 0 || nx >= 100001 || visited[nx])) {
//             visited[nx] = true;
//             tmp3.push_back(nx);
//             que.push({nx, nc+1, tmp3});
//         }
//     }
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> N >> K;
//     //걷는다 or 순간이동한다.
//     bfs(N);
//     cout << ans << '\n';
//     for(auto i : ansvec) cout << i << ' ';
//     return 0;
// }

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
        nc = cur.cnt;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc+1});
        }
        nx = cur.x - 1;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc+1});
        }
        nx = cur.x * 2;
        if(!(nx < 0 || nx >= 100001 || visited[nx] != -1)) {
            visited[nx] = cur.x;
            que.push({nx, nc+1});
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