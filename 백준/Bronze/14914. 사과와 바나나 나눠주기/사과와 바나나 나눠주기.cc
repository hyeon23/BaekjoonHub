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

int main(){
    int a, b;
    cin >> a >> b;

    int GCD = gcd(max(a, b), min(a, b));

    for(int i = 1; i <= GCD; ++i){
        if(GCD % i == 0){
            cout << i << ' ' << a / i << ' ' << b / i << '\n';
        }
    }

    return 0;
}