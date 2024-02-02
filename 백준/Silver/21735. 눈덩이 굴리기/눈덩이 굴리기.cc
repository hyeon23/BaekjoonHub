#include <bits/stdc++.h>
using namespace std;
int N, M, tmp, ms = -1;
vector<int> yards;
void DFS(int cur, int size, int cnt){
    if(cur == N || cnt == M) {
        ms = max(ms, size);
        return;
    }
    if(cur < N) DFS(cur+1, size+yards[cur+1], cnt+1);
    if(cur+1 < N) DFS(cur+2, size/2+yards[cur+2], cnt+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> M;
    yards.push_back(0);
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        yards.push_back(tmp);
    }
    DFS(0, 1, 0);
    cout << ms;
    return 0;
}