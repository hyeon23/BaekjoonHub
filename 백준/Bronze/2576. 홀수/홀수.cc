#include <bits/stdc++.h>
using namespace std;

int main(){
    int minval = 101, tmp, sum = 0;
    for(int i = 0; i < 7; ++i){
        cin >> tmp;
        if(tmp % 2 == 1){
            sum += tmp;
            if(minval > tmp) minval = tmp;
        }
    }

    if(minval == 101) cout << -1;
    else cout << sum << '\n' << minval;
    return 0;
}