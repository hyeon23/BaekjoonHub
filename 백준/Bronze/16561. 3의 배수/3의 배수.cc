#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int cnt = 0, sum = 0;

    for(int i = 1; i <= n/3; ++i){
        for(int j = 1; j <= n/3; ++j){
            sum = i * 3 + j * 3;

            if((n - sum) % 3 == 0 && sum < n) ++cnt;
        }    
    }

    cout << cnt;

    return 0;
}