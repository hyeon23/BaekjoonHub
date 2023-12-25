#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    unsigned long long n;
    cin >> n;
    cout << bitset<64>(n-1).count() % 2;
    return 0;
}