//1. 25명 중 7명을 뽑는다.
//2. 이다솜파가 4명 이상인지, 모든 학생이 인접해있는지 검사한다.
#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<string> arr(5);
bool visited[25];
bool checked[5][5];
int ans = 0;
bool More4(){
    int cnt = 0;
    for(int i = 0; i < 25; ++i){
        //해당 칸을 방문했고, 이다솜파라면 카운드
        if(visited[i] && arr[i/5][i%5] == 'S'){
            ++cnt;
        }
    }
    //방문된 이다솜파가 4명 이상
    if(cnt >= 4) return true;
    else return false;
}
bool NearBy(){
    //DFS를 통한 탐색
    queue<pair<int, int>> q;
    memset(checked, false, sizeof(checked));
    for(int i = 0; i < 25; ++i){
        //순열로 visited[i] = true인 루트가 7개일 때,
        //어느 한 위치 중 끝값을 큐에 넣는다.
        if(visited[i]){
            q.push({i/5, i%5});
            break;
        }
    }
    //큐에 넣은 시작점을 기반으로 DFS 수행
    int cnt = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        checked[x][y] = true;
        q.pop();

        if(cnt == 7) return true;
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
            if(checked[nx][ny] || !visited[nx*5+ny]) continue;
            q.push({nx, ny});
            checked[nx][ny] = true;
            ++cnt;
        }
    }
    return false;
}
void DFS(int depth, int num){
    if(depth == 7){
        if(More4() && NearBy()) ++ans;
        return;
    }
    for(int i = num; i < 25; ++i){
        if(!visited[i]){
            visited[i] = true;
            DFS(depth+1, i+1);
            visited[i] = false;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int i = 0; i < 5; ++i){
        cin >> arr[i];
    }
    DFS(0, 0);
    cout << ans;
}