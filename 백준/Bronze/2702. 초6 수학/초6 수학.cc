#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B){
    if(A % B == 0){
        return B;
    }
    else{
        return gcd(B, A % B);
    }
}

int lcm(int A, int B){
    return A * B / gcd(A, B);
}

int main(){
    int T, a, b;

    cin >> T;

    while(T--){
        cin >> a >> b;

        cout << lcm(max(a, b), min(a, b)) << ' ' << gcd(max(a, b), min(a, b)) << '\n';
    }

    return 0;
}