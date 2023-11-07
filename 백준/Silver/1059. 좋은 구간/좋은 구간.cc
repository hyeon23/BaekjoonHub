#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int L;

    cin >> L;
    vector<int> vec(L);

    bool trigger = false;

    for(int i = 0; i < L; ++i) cin >> vec[i];

    sort(vec.begin(), vec.end());

    int n;

    cin >> n;

    for(int i = 0; i < L; ++i){
        if(vec[i] == n){
            trigger = true;
            break;
        }
    }

    if(trigger) cout << 0 << '\n';
    else{
        int start = 0;
        int end = 0;

        for(int i = 0; i < L; ++i){
            if(vec[i] > n){
                start = vec[i-1];
                end = vec[i];
                break;
            }
        }
        int ans = 0;
        for(int i = start+1; i < end; ++i){
            for(int j = i+1; j < end; ++j){
                if(i <= n && n <= j)
                    ++ans;
            }
        }
        cout << ans << '\n';
    }
}