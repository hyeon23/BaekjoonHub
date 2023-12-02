#include <bits/stdc++.h>
using namespace std;

int main(){
    int out, in, cur = 0, ans = 0;
    for(int i = 0; i < 4; ++i){
        cin >> out >> in;

        cur = cur - out + in;

        ans = max(ans, cur);
    }
    cout << ans;
    return 0;
}