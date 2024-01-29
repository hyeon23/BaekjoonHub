#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> vec(9);
vector<bool> visited(9);
void DFS(int depth){
    if(depth == N){
        for(int i = 0; i < N; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
    }
    for(int i = 1; i <= N; ++i){
        if(visited[i]) continue;
        visited[i] = true;
        vec[depth] = i;
        DFS(depth+1);
        visited[i] = false;
    }
}
int main(){
    cin >> N;
    DFS(0);
    return 0;
}