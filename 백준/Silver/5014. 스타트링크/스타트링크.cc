#include <bits/stdc++.h>
using namespace std;
int F, S, G, U, D;
int board[1000001] = {0, };
bool bfs(int start){
    queue<pair<int, int>> que;
    board[start] = 1;
    que.push({start, 0});
    while(!que.empty()){
        int cx = que.front().first;
        int cc = que.front().second;
        if(cx == G) {
            cout << cc;
            return true;
        }
        que.pop();
        for(int i = 0; i < 2; ++i){
            int nx;
            if(i == 0) nx = cx + U;
            else nx = cx - D;
            if(nx < 1 || nx > F || board[nx] == 1) continue;
            board[nx] = 1;
            que.push({nx, cc + 1});
        }
    }
    return false;
}
int main(){
    //총 F층, 스타트링크 G층, 현재 S층
    //U -> 위로 U층, D -> 아래로 D층
    //G층에 도착할 때까지, 버튼 최소 클릭 횟수
    
    cin >> F >> S >> G >> U >> D;
    
    if(!bfs(S)) cout << "use the stairs";
    return 0;
}