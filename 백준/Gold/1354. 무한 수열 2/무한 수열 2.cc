#include <bits/stdc++.h>
using namespace std;
long long N, P, Q, X, Y;
unordered_map<long long, long long> m;

long long DP(long long i){
    if(i <= 0) return 1;
    if(m.find(i)!=m.end()) return m[i];
    return m[i] = DP(i/P-X) + DP(i/Q-Y);
}

int main(){
    cin >> N >> P >> Q >> X >> Y;
    cout << DP(N);
}