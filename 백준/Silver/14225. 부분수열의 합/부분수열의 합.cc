#include <bits/stdc++.h>
#define MAX 21
#define MAX_SUM 2000001
#define INF 987654321
using namespace std;

int N;
int arr[MAX];
bool num[MAX_SUM] = {false,};

void dfs(int idx, int sum){
    if(idx == N){//노드의 끝까지 간 경우
        num[sum] = true;
        return;
    }
    //idx 노드 포함
    dfs(idx+1, sum+arr[idx]);
    //idx 노드 미 포함
    dfs(idx+1, sum);
}
//N개의 수를 돌아가며 탐색하는 중, 더한 version과 안 더한 version으로 분기하여 해결하는 방법

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N;
    for(int i = 0; i < N; ++i) cin >> arr[i];

    dfs(0, 0);

    for(int i = 1; i < MAX_SUM; ++i){
        if(!num[i]){
            cout << i << '\n';
            break;
        }
    }
}