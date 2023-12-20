#include <bits/stdc++.h>
#define x first
#define t second
using namespace std;
int N, K;
bool visited[500001][2];
int bfs(){
    queue<pair<int, int>> que;
    que.push({N, 0});// 언니 위치 N, 현재 시간 0
    visited[N][0] = true;
    while(!que.empty()){
        auto cur = que.front();
        que.pop();
        // K + cur.t * (cur.t + 1) / 2: t초일 때, 동생의 위치
        //= 동생의 위치가 최대 범위를 넘어갈 경우 return -1
        if(K + cur.t * (cur.t + 1) / 2 >= 500001) return -1;
        //t초(짝수 or 홀수)일 때 동생의 위치가 이미 방문된 위치라면 return cur.t
        if(visited[K + cur.t * (cur.t + 1) / 2][cur.t % 2]) return cur.t;
        //현재 위치 * 2 도착지가 범위 내면서, 해당 지역을 같은 타임라인대에 방문하지 않은 경우
        if(2 * cur.x <= 500000 && !visited[2 * cur.x][(cur.t + 1) % 2]){
            //방문 처리
            visited[2 * cur.x][(cur.t + 1) % 2] = true;
            //다음 위치, 다음 시간대 넣기
            que.push({2 * cur.x, cur.t + 1});
        }
        //현재 위치 + 1 도착지가 범위 내면서, 해당 지역을 같은 타임라인대에 방문하지 않은 경우
        if(cur.x + 1 <= 500000 && !visited[cur.x + 1][(cur.t + 1) % 2]){
            //방문 처리
            visited[cur.x + 1][(cur.t + 1) % 2] = true;
            //다음 위치, 다음 시간대 넣기
            que.push({cur.x + 1, cur.t + 1});
        }
        //현재 위치 - 1 도착지가 범위 내면서, 해당 지역을 같은 타임라인대에 방문하지 않은 경우
        if(cur.x - 1 >= 0 && !visited[cur.x - 1][(cur.t + 1) % 2]){
            //방문 처리
            visited[cur.x - 1][(cur.t + 1) % 2] = true;
            //다음 위치, 다음 시간대 넣기
            que.push({cur.x - 1, cur.t + 1});
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> K;
    cout << bfs();
    return 0;
}