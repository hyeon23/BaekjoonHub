#include<bits/stdc++.h>
using namespace std;
int T, h, w, ans = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<string> board;
vector<vector<bool>> visited(101, vector<bool>(101, false));
deque<pair<int, int>> doorpos[26];
//열쇠를 먹었을 때 -> 해당 열쇠에 해당하는 문 DFS 탐색
bool is_connected(int x, int y){
    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];
        //가장자리에 다시 한번 문이 있을 경우
        if(nx < -1 || ny < -1 || nx > h || ny > w) continue;
        if(visited[nx][ny] || nx == 0 || ny == 0 || nx == h || ny == w) return true;
    }
    return false;
}
void bfs(int x, int y){
    queue<pair<int, int>> que;
    visited[x][y] = true;
    que.push({x, y});
    while(!que.empty()){
        auto cur = que.front();
        que.pop();
        //.가 있는 경우 -> 방문 처리 후 bfs 탐색
        // if(board[cur.first][cur.second] == '.'){
        // }

        //문서의 경우
        if(board[cur.first][cur.second] == '$'){
            ++ans;
        }
        //소문자 = 키인 경우 -> 열쇠 주운 후 bfs 탐색
        else if(islower(board[cur.first][cur.second])){
            //가진 열쇠에 대한 문 해금
            auto& vtmp = doorpos[board[cur.first][cur.second] - 'a'];
            while(!vtmp.empty()){
                //열린 문에 대해 연결성 확인
                auto tmp = vtmp.front();
                if(is_connected(tmp.first, tmp.second)){
                    visited[tmp.first][tmp.second] = true;
                    que.push({tmp.first, tmp.second});
                }
                vtmp.pop_front();
                //문 열기
                board[tmp.first][tmp.second] = '.';
            }
        }
        //대문자 = 문인 경우 -> 열쇠 유무 확인 후 처리[들어갈 수 있는 문]
        else if(isupper(board[cur.first][cur.second])){
            //열릴 문은 열렸고, 도달된 문은 잠긴 상태
            visited[cur.first][cur.second] = false;
            continue;
        }
        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            //제한 범위 내 BFS 수행
            if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
            //방문하지 않은 경우 or 벽이 아닌 경우에 한해 BFS 수행
            if(visited[nx][ny] || board[nx][ny] == '*') continue;
            visited[nx][ny] = true;
            que.push({nx, ny});
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //상근이가 훔칠 수 있는 문서의 최대 개수
    cin >> T;
    string tmp;
    while(T--){
        //초기화
        board.clear();
        for(int i = 0; i < 26; ++i){
            while(!doorpos[i].empty()){
                doorpos[i].pop_front();
            }
        }
        for(int i = 0; i < visited.size(); ++i)
            for(int j = 0; j < visited[i].size(); ++j)
                visited[i][j] = false;

        ans = 0;
        
        cin >> h >> w;
        for(int i = 0; i < h; ++i){
            cin >> tmp;//. = 빈공간 / * = 벽(이동불가) / $ = '훔처야 하는 문서' / 대문자 = 문 / 소문자 = 열쇠
            board.push_back(tmp);
            for(int j = 0; j < tmp.size(); ++j){
                //문 위치 기록
                if(isupper(tmp[j])){
                    doorpos[tmp[j]-'A'].push_back({i, j});
                }
            }
        }
        cin >> tmp;
        if(tmp != "0"){
            for(auto c : tmp){
                //가진 열쇠에 대한 모든 문 해금
                while(!doorpos[c - 'a'].empty()){
                    auto fr = doorpos[c - 'a'].front();
                    board[fr.first][fr.second] = '.';
                    doorpos[c - 'a'].pop_front();
                }
            }
        }
        //가장자리에서 BFS 탐색 수행
        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                if(!(i == 0 || j == 0 || i == h-1 || j == w-1)) continue;
                //방문하지 않았거나 벽이 아닌 경우 bfs 수행
                if(!visited[i][j] && board[i][j] != '*') bfs(i, j);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}