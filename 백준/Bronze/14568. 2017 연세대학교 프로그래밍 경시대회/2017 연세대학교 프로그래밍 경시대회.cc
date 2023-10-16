#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int t = 2, y = 1, n = 3;

    int ans = 0;

    for(int i = n; i < N; ++i){
        for(int j = t; j < N; ++j){
            for(int k = y; k < N; ++k){
                if(j % 2 != 0) continue;

                if(i < k + 2) continue;

                if(i + j + k == N) ++ans;
            }
        }
    }
    cout << ans;
    return 0;
}