#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> vec(9);
void DFS(int depth, int num){
    if(depth == M){
        for(int i = 0; i < M; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = num; i <= N; ++i){
        vec[depth] = i;
        DFS(depth+1, i);
    }
}
int main(){
    cin >> N >> M;
    DFS(0, 1);
    return 0;
}