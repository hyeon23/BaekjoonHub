#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> vec(9, 0);
//중복 선택 허용 : 방문 배열 필요 X // vector<bool> visisted(9, false); 
//대소 제한 없음
void DFS(int depth){
    if(depth == M){
        for(int i = 0; i < M; ++i){
            cout << vec[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 1; i <= N; ++i){
        vec[depth] = i;
        DFS(depth+1);
    }
}
int main(){
    cin >> N >> M;
    DFS(0);
    return 0;
}