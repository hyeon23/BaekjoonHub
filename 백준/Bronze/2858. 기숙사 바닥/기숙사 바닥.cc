#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, B;
    cin >> R >> B;

    for(int i = 1; i <= B; ++i){
        if(B % i != 0) continue;

        int s = i;
        int e = B / i;

        if((s + 2) * (e + 2) == R + B){
            cout << max(e, s) + 2 << ' ' << min(e, s) + 2;
            return 0;
        }
    }

    return 0;
}