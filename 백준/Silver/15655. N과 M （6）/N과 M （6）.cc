#include <bits/stdc++.h>
using namespace std;
int N, M;
//N개 중 M개 고른 수열
//길이 M & 중복 허용 X
//오름차순 수열
vector<int> input_vec;
vector<int> vec(9);
vector<bool> visited(9);
void DFS(int depth, int num){
    if(depth == M){
        for(int i = 0; i < M; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = num; i < N; ++i){
        if(!visited[i]){
            visited[i] = true;
            vec[depth] = input_vec[i];
            DFS(depth+1, i+1);
            visited[i] = false;
        }
    }
}
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        input_vec.push_back(tmp);
    }
    sort(input_vec.begin(), input_vec.end());
    DFS(0, 0);
    return 0;
}