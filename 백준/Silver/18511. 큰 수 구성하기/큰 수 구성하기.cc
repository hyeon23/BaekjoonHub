#include <bits/stdc++.h>
using namespace std;
int N, K, tmp, ans = 0;
vector<int> vec;
void dfs(int a, int n){
    if(a > N) return;
    ans = max(ans, a);
    for(int i = 0; i < vec.size(); ++i){
        dfs(a + vec[i] * n, n * 10);
    }
}
int main(){
    cin >> N >> K;
    for(int i = 0; i < K; ++i){
        cin >> tmp;
        vec.push_back(tmp);
    }
    dfs(0, 1);
    cout << ans;
    return 0;
}