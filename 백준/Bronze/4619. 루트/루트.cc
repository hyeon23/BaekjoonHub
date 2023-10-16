#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int B, N;
    while(cin >> B >> N){
        if(B == 0 && N == 0) break;

        int A = 1;
        int ans = 1;

        long long start = abs(B - powl(A, N));

        while(A != B){
            ++A;
            if(start < abs(B - powl(A, N))){
                break;
            }
            start = abs(B - powl(A, N));
        }

        if(N == 1 || B == 1) cout << B << '\n';
        else cout << A-1 << '\n';
    }
    return 0;
}