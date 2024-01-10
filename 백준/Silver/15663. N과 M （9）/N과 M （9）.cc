#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> input;
vector<int> vec(9);
vector<bool> visited(9);
// set<vector<int>> ans;
//중복되는 수열 출력 불가
//사전 순으로 증가
void DFS(int depth){
    if(depth == M){
        for (int i = 0; i < M; ++i) {
          cout << vec[i] << ' ';
        }
        cout << '\n';
        // vector<int> anstmp;
        // for(int i = 0; i < M; ++i)
        //     anstmp.push_back(vec[i]);
        // ans.insert(anstmp);
        return;
    }
    int tmp = 0;
    for(int i = 0; i < N; ++i){
        if(!visited[i] && tmp != input[i]){
            visited[i] = true;
            vec[depth] = input[i];
            tmp = vec[depth];
            DFS(depth+1);
            visited[i] = false;
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
    DFS(0);
    // for(auto s : ans){
    //     for(auto i : s){
    //         cout << i << ' ';
    //     }
    //     cout << '\n';
    // }
    return 0;
}