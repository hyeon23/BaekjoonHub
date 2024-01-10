#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> input;
vector<int> vec(9);
void DFS(int depth, int num){
    if(depth == M){
        for (int i = 0; i < M; ++i) {
          cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int tmp = 0;
    for(int i = num; i < N; ++i){
        if(tmp != input[i]){
            vec[depth] = input[i];
            tmp = vec[depth];
            DFS(depth+1, i);
        }
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