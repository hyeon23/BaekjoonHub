#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[5001];
bool visited[5001];
int map[5001][5001];
int n;
long long ans = 0;


void init(){
    
    //총 방의 개수 N
    cin >> n;
    
    for(int i = 0;i<n-1;i++){
        int a,b,c;
        cin >> a >> b >> c;
        map[a][b] = c;
        map[b][a] = c;
        //a와 b를 연결하고, b와 a를 연결(양방향), 길이를 map2차원 배열에 저장
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
}

void dfs(int start,long long sum){ //start->현재 방, sum -> 길이 갱신

    if(sum > ans){ // 최장 길이 갱신
        ans = sum;
    }
    visited[start] = 1; //현재 방 방문처리
    
    for(int i = 0;i<graph[start].size();i++){ //방의 자식들을 대상으로 백트래킹 실행
        int y = graph[start][i];
        
        //백트래킹 코드
        if(visited[y] == false){
            visited[y] = true;
            dfs(y,sum+map[start][y]);
            visited[y] = false;
        }
    }
    
}
int main(void){
    init();
    dfs(1,0);
    cout << ans;
}