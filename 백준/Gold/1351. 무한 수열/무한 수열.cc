#include <bits/stdc++.h>
using namespace std;
long long N, P, Q;
map<long long, long long> m;
long long DP(long long i){
    if(i == 0) return 1;
    if(i == 1) return 2;
    long long first, second;

    if(m.find(floor(i / (float)P)) != m.end()){
        first = m[floor(i / (float)P)];
    }
    else{
        first = DP(floor(i / (float)P));
        m[floor(i / (float)P)] = first;
    }

    if(m.find(floor(i / (float)Q)) != m.end()){
        second = m[floor(i / (float)Q)];
    }
    else{
        second = DP(floor(i / (float)Q));
        m[floor(i / (float)Q)] = second;
    }
    return first + second;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> P >> Q;
    cout << DP(N);
}