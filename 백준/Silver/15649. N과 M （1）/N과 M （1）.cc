#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> arr(9, 0);
vector<bool> visited(9, false);
void DFS(int n){
    if(n == M){
        for(int i = 0; i < M; ++i){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; ++i){
        if(!visited[i]){
            visited[i] = true;
            arr[n] = i;
            DFS(n+1);
            visited[i] = false;
        }
    }
}
int main(){
    cin >> N >> M;
    DFS(0);
}