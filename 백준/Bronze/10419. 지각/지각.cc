#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int d;
        cin >> d;//수업 시간

        int ans = 0;

        for(int i = 0; i <= 10001; ++i){
            if(d >= i * (i + 1)){
                ans = i;
            }
            else{
                break;
            }
        }

        cout << ans << '\n';
        
    }
    return 0;
}