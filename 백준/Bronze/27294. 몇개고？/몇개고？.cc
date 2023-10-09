#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, S;
    cin >> T >> S;
    if(S == 1 || !(T >= 12 && T <= 16)) cout << 280;
    else if(S == 0 && (T >= 12 && T <= 16)) cout << 320;
    return 0;
}