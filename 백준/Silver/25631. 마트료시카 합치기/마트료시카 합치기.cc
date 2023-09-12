#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> ma(N);
    for(int i = 0; i < N; ++i){
        cin >> ma[i];
    }

    sort(ma.begin(), ma.end());

    int ans = 1;

    for(int i = 0; i < ma.size(); ++i){
        int cnt = 1;
        for(int j = 0; j < ma.size(); ++j){
            if(i == j || i >= j) continue;
            
            if(ma[i] == ma[j]) ++cnt;
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}