#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt;
    cin >> n;
    while(n--){
        cin >> cnt;
        vector<string> A(cnt);
        vector<string> B(cnt);
        
        for(int i = 0; i < cnt; ++i) cin >> A[i];
        for(int i = 0; i < cnt; ++i) cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for(int i = 0; i < cnt; ++i){
            if(A[i] != B[i]) {
                cout << "CHEATER" << '\n';
                break;
            }
            if(i == cnt - 1){
                cout << "NOT CHEATER" << '\n';
            }
        }
    }
    return 0;
}