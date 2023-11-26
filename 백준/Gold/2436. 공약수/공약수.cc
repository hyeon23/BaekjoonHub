#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a % b == 0) return b;
    return gcd(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;
    b /= a;
    for(int r = (int)sqrt(b); r >= 1; --r){
        if(b % r) continue;
        if(gcd(b/r, r) == 1) {
            cout << a*r << ' ' << b/r*a;
            break;
        }
    }
}