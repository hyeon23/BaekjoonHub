#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n;
    vector<int> vec(n);
    vector<int> ans;

    for(int i = 0; i < n; ++i){
        cin >> vec[i];
        m = max(m, vec[i]);
    }

    for(int i = 1; i <= m; ++i){
        for(int j = 0; j < n; ++j){
            if(vec[j] % i != 0) break;
            if(j == n - 1) ans.push_back(i);
        }
    }

    for(int i = 0; i < ans.size(); ++i) cout << ans[i] << '\n';

    return 0;
}