#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, prior = 1000001, tmp, ans = 1;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        if(prior <= tmp) ++ans;
        prior = tmp;
    }
    cout << ans;
    return 0;
}