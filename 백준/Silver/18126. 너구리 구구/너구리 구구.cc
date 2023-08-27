#include <bits/stdc++.h>
#define MAX 5001
using namespace std;

//거리를 저장하는 이차원 공간
int distmap[MAX][MAX]; //vector<vector<int>> distmap(MAX, vector<int>(MAX));
//그래프 연결 관계
vector<int> graph[MAX]; //vector<vector<int>> graph(MAX);
//방문 체커
bool visited[MAX]; //vector<bool> visited(MAX);
long long ans = 0;
void dfs(int start, long long dist){
    if(dist > ans) ans = dist;
    visited[start] = true;//현재 방 방문처리
    //자식들을 대상으로 백트래킹 시작
    for(int i = 0; i < graph[start].size(); ++i){
        int next = graph[start][i];
        if(!visited[next]){
            visited[next] = true;
            dfs(next, dist + distmap[start][next]);
            visited[next] = false;
        }
    }
}
int main(){
    int N, A, B, C;
    cin >> N;
    for(int i = 0; i < N-1; ++i){
        cin >> A >> B >> C;
        distmap[A][B] = C;
        distmap[B][A] = C;

        //a와 b를 연결하고, b와 a를 연결(양방향), 길이를 map에 저장
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    dfs(1, 0);
    cout << ans;
}