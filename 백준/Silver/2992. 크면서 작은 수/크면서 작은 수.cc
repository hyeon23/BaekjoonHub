#include <bits/stdc++.h>
using namespace std;
string X;
int main(){
    cin >> X;
    string tmp = X;
    next_permutation(X.begin(), X.end());
    if(stoi(tmp) < stoi(X)) cout << X;
    else cout << 0;
    return 0;
}