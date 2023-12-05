#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;

        int tmp = 1;

        for(int i = 0; i < b; ++i){
            tmp = (tmp * a) % 10;
        }

        if(tmp == 0) cout << 10 << '\n';
        else cout << tmp << '\n';

        tmp = 1;
    }
    return 0;
}