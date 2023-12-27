#include <bits/stdc++.h>
using namespace std;
int k;
vector<int> nodes(1024, 0);
vector<vector<int>> ans(10+1);
void recursion(int N, int start, int end){
    if(N == 1){
        ans[N].push_back(nodes[start]);
        return;
    }
    recursion(N-1, start, ((start + end) / 2 - 1));
    ans[N].push_back(nodes[(start + end) / 2]);
    recursion(N-1, ((start + end + 1) / 2 + 1), end);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> k;
    int node = pow(2, k) - 1;
    for(int i = 0; i < node; ++i) cin >> nodes[i];
    recursion(k, 0, node-1);
    for(int i = k; i > 0; --i){
        for(int j = 0; j < ans[i].size(); ++j){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}