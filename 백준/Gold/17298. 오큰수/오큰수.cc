#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, val;
    cin >> N;
    stack<int> stk;
    vector<int> vec(N, 0);
    vector<int> ans(N, -1);
    for(int i = 0; i < N; ++i) cin >> vec[i];
    for(int i = N-1; i >= 0; --i){
        while(!stk.empty() && stk.top() <= vec[i]) stk.pop();
        if(stk.empty()) ans[i] = -1;
        else ans[i] = stk.top();
        stk.push(vec[i]);
    }
    for(int i = 0; i < N; ++i) cout << ans[i] << ' ';
    return 0;
}