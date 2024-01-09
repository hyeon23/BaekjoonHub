#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> input;
vector<int> vec(9);
void DFS(int depth, int num){
    if(depth == M){
        for(int i = 0; i < M; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = num; i < N; ++i){
        vec[depth] = input[i];
        DFS(depth+1, i);
    }
}
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
    }
    sort(input.begin(), input.end());
    DFS(0, 0);
    return 0;
}