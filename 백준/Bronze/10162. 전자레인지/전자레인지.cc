#include <bits/stdc++.h>
using namespace std;

int main(){
    int A = 300;
    int B = 60;
    int C = 10;

    int T;
    cin >> T;

    vector<int> ans(3, 0);

    while(T > 0){
        if(T >= A){
            T -= A;
            ++ans[0];
        }
        else if(T >= B){
            T -= B;
            ++ans[1];
        }
        else if(T >= C){
            T -= C;
            ++ans[2];
        }
        else{
            cout << -1;
            return 0;
        }
    }

    for(int i = 0; i < 3; ++i){
        cout << ans[i] << ' ';
    }

    return 0;
}