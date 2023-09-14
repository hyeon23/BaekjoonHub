#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    cin >> n;

    int ans = 0;

    for(int i = 0; i < 2*n; ++i){
        cin >> tmp;
        ans += abs(tmp);
    }
    cout << ans;
    return 0;
}