#include <bits/stdc++.h>
using namespace std;
int N;
int roma[4] = {1, 5, 10, 50};
vector<bool> visited(21);
set<int> s;
void DFS(int depth, int num, int sum){
    if(depth == N){
        s.insert(sum);
        return;
    }
    for(int i = num; i < 4; ++i){
        if(visited[i])
        visited[i] = true;
        DFS(depth + 1, i, sum + roma[i]);
        visited[i] = false;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //I(1), V(5), X(10), L(L)
    cin >> N;
    DFS(0, 0, 0);
    cout << s.size();
    return 0;
}