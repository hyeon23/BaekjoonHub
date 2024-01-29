#include <bits/stdc++.h>
using namespace std;
string X;
int main(){
    cin >> X;
    string tmp = X;
    if(next_permutation(X.begin(), X.end())) cout << X;
    else cout << 0;
    return 0;
}