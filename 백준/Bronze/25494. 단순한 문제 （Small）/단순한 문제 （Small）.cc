#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, a, b, c;
    cin >> T;

    for(int i = 0; i < T; ++i){
        cin >> a >> b >> c;

        int cnt = 0;

        for(int j = 1; j <= a; ++j){
            for(int k = 1; k <= b; ++k){
                for(int l = 1; l <= c; ++l){
                    if((j % k) == (k % l) && (k % l) == (l % j)){
                        ++cnt;
                    }
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}