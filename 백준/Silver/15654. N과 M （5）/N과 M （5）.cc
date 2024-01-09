#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> in_vec;
vector<int> vec(9);
vector<bool> visited(9);
void DFS(int depth){
    if(depth == M){
        for(int i = 0; i < M; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < N; ++i){
        if(!visited[i]){
            visited[i] = true;
            vec[depth] = in_vec[i];
            DFS(depth+1);
            visited[i] = false;
        }
    }
}
int main(){
    int tmp;
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        in_vec.push_back(tmp);
    }
    sort(in_vec.begin(), in_vec.end());
    DFS(0);
    return 0;
}