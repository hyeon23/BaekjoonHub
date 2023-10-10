#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m, ans = 0;
        cin >> n >> m;

        for(int a = 1; a < n; ++a){
            for(int b = a + 1; b < n; ++b){
                if((a * a + b * b + m) % (a * b) == 0) ++ans;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}