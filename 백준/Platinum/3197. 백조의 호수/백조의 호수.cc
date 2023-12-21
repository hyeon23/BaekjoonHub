// #include <bits/stdc++.h>
// using namespace std;
// int R, C, ans = 0;
// int dx[4] = {1, 0, -1, 0};
// int dy[4] = {0, 1, 0, -1};
// vector<vector<char>> board(1501, vector<char>(1501));
// vector<pair<int, int>> Bpos;
// bool dir_4_check(int x, int y){
//     int cnt = 0;
//     for(int i = 0; i < 4; ++i){
//         int nx = x + dx[i];
//         int ny = y + dy[i];
//         if(nx < 0 || ny < 0 || nx >= R || ny >= C || board[nx][ny] == 'X') ++cnt;
//     }
//     if(cnt == 4) return true;
//     else return false;
// }
// bool bfs(int x, int y, vector<vector<bool>>& visited){
//     queue<tuple<int, int>> que;
//     visited[x][y] = true;
//     que.push({x, y});
//     while(!que.empty()){
//         int cx, cy;
//         tie(cx, cy) = que.front();
//         if(cx == Bpos[1].first && cy == Bpos[1].second){
//             return true;
//         }
//         que.pop();
//         for(int i = 0; i < 4; ++i){
//             int nx = cx + dx[i];
//             int ny = cy + dy[i];
//             if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
//             if(visited[nx][ny] || board[nx][ny] == 'X') continue;
//             visited[nx][ny] = true;
//             que.push({nx, ny});
//         }
//     }
//     return false;
// }
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     cin >> R >> C;
//     char tmp;
//     for(int i = 0; i < R; ++i){
//         for(int j = 0; j < C; ++j){
//             cin >> tmp;
//             if(tmp == 'L') {
//                 board[i][j] = '.';
//                 Bpos.push_back({i, j});
//             }
//             else{
//                 board[i][j] = tmp;
//             }
//         }
//     }
//     vector<vector<bool>> visited(R, vector<bool>(C, false));
//     //0. 두 마리의 백조가 만날 때까지 아래 과정 반복
//     //1. 현재 시점에서 백조1 -> 백조2 루트 BFS 탐색
//     while(!bfs(Bpos[0].first, Bpos[0].second, visited)){
//         ++ans;
//         //2. 빙판 감소
//         vector<vector<char>> newboard(1501, vector<char>(1501));
//         for(int i = 0; i < R; ++i){
//             for(int j = 0; j < C; ++j){
//                 if(board[i][j] == '.' || board[i][j] == 'L'){
//                     newboard[i][j] = board[i][j];
//                 }
//                 else if(board[i][j] == 'X'){
//                     if(dir_4_check(i, j)) { // 4방향 모두 X인 경우
//                         newboard[i][j] = 'X';
//                     }
//                     else{ // 4방향 모두 X가 아닌 경우
//                         newboard[i][j] = '.';
//                     }
//                 }
//             }
//         }
//         board = newboard;
//         //방문 배열 초기화
//         for(int i = 0; i < R; ++i){
//             for(int j = 0; j < C; ++j){
//                 visited[i][j] = false;
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }

//r, c: 호수 세로 가로 길이 저장
//dx, dy: 네 방향 이동을 위하 배열
//waterQ: 빙하를 제거하기 위한 물의 좌표를 저장
//swanQ: 백조가 다닐 수 있는 최전선 범위의 좌표 저장
//swan: 백조 두마리의 좌표 저장
//lake: 호수의 모양 저장
//timer: 답을 출력

//Input
//1. r, c를 입력받는다.
//2. r x c만큼 lake에 입력한다.
//-백조는 물 위에 있기 때문에 '.'과 'L'을 waterQ에 push
//-'L'의 좌표를 swan에 저잦ㅇ
//3. 0번 백조부터 시작해서, swanQ에 push

//Sol
//1. 백조끼리 만날 수 있는지 여부를 확인한다.
//-만날 수 없다면 -> 다음날에 빙하가 녹은 구역들의 좌표는 0번째 백조가 다닐 수 있습니다.(백조의 좌표를 queue s에 넣는다.)
//2. 다음날 백조가 다닐 수 있는 최전선 좌표들이 저장됨
//-다음날이 되어 녹아 물이된 곳들의 좌표를 저장해야 한다.
//-저장된 waterQ의 size만큼 확인한다면 다음 날에 녹을 빙하들의 좌표들을 빠르게 확인할 수 있습니다.
//-현재 날의 시점에서 waterQ의 좌표들과 인접한 곳들 중 빙하 'X'가 있다면 그 구역을 물로 만들어주고, waterQ에 넣어준다.
//3. 0번 백조가 계속해서 녹은 빙하쪽으로 이동하며, 1번 백조와 빠르게 만나게 되고, 만나면, 그 날을 출력해준다.

#include <bits/stdc++.h>
using namespace std;
int r, c, ans = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int visited[1501][1501];
char lake[1501][1501];
vector<pair<int, int>> swanpos;
queue<pair<int, int>> swanQ, waterQ;
bool check_meet(){
    queue<pair<int, int>> tmp;
    //백조 시작점에서 BFS 출발
    while(!swanQ.empty()){
        int x = swanQ.front().first;
        int y = swanQ.front().second;
        swanQ.pop();
        //백조 1과 백조 2가 만났다면
        if(x == swanpos[1].first && y == swanpos[1].second) return true;
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny] = 1;
            if(lake[nx][ny] == 'X') tmp.push({nx, ny}); // 다음날 다음 빙하에 백조가 다닐 수 있기 때문에 임시 큐에 넣는다.
            else swanQ.push({nx, ny});
        }
    }
    //제작한 임시 Queue를 백조 이동 큐로 만든다.
    swanQ = tmp;
    return false;
}
//모든 물 BFS 탐색
void melt_ice(){
    int wsize = waterQ.size();
    for(int i = 0; i < wsize; ++i){
        int x = waterQ.front().first;
        int y = waterQ.front().second;
        waterQ.pop();
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
            //물에서 X로 이동하는 경우, 해당 위치를 물로 바꾼다(= 빙하 녹이기)
            if(lake[nx][ny] != 'X') continue;
            waterQ.push({nx, ny});
            lake[nx][ny] = '.';
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> r >> c;
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            cin >> lake[i][j];
            if(lake[i][j] == 'L') waterQ.push({i, j}), swanpos.push_back({i, j});
            if(lake[i][j] == '.') waterQ.push({i, j});
        }
    }
    swanQ.push({swanpos[0].first, swanpos[0].second});
    while(true){
        //백조 만남 체크
        if(check_meet()) break;
        ++ans;
        //빙하 녹이기
        melt_ice();
    }
    cout << ans;
}
