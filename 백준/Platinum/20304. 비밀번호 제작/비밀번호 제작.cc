#include <bits/stdc++.h>
using namespace std;
int N, M, ret = -1;
int max_bit_size = 0; // 최대 비트 크기를 저장하는 변수
vector<int> passwards; // 비밀번호 목록을 저장하는 배열
vector<int> visited(1000001, 0); // 방문 여부를 저장하는 배열
vector<int> depth(1000001, 0); // 시작점으로부터의 깊이를 저장하는 배열
void Make_max_bit_size(){
    int check = N;
    // N을 2로 나누면서 최대 비트 크기 계산
    while(check){
        check /= 2;
        max_bit_size++;
    }
}
void Bfs(){
    queue<int> que;
    // 초기 비밀번호들을 시작점으로 설정하여 BFS 수행
    for(int i = 0; i < passwards.size(); ++i){
        que.push(passwards[i]);
        visited[passwards[i]] = 1;
        depth[passwards[i]] = 0;
    }
    while(!que.empty()){
        int from = que.front();
        que.pop();
        // 현재 비밀번호의 각 비트를 토글하여 새로운 비밀번호 생성
        for(int i = 0; i < max_bit_size; ++i){
            //(1 << i):  << i는 i번째 비트가 1이고 나머지 비트는 0인 값
            int to = (from ^ (1 << i)); // ^: XOR / &: AND / |: OR
            // 새로운 비밀번호가 범위 내에 있고 아직 방문하지 않았다면 큐에 추가
            if(to <= N && visited[to] == 0){
                visited[to] = 1;
                depth[to] = depth[from] + 1;
                que.push(to);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    int passward;
    for(int i = 0; i < M; ++i){
        cin >> passward;
        passwards.push_back(passward);
    }
    Make_max_bit_size(); // 최대 비트 크기 계산
    Bfs(); // BFS 수행
    // 최종적으로 방문한 비밀번호들 중에서 가장 깊은 깊이를 찾아 반환
    for(int i = 0; i <= N; ++i) ret = max(ret, depth[i]);
    cout << ret;
}