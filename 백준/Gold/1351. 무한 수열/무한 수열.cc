#include <bits/stdc++.h>
using namespace std;
long long N, P, Q;
map<long long, long long> m;
long long DP(long long i){
    if(i == 0) return 1;
    if(m.find(i)!=m.end()) return m[i];
    return m[i] = DP(i/P) + DP(i/Q);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> P >> Q;
    cout << DP(N);
}