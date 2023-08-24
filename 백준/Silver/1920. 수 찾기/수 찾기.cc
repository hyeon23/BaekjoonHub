#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    long long tmp;
    cin >> N;
    set<int> s;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        s.insert(tmp);
    }
    cin >> M;

    for(int i = 0; i < M; ++i){
        cin >> tmp;
        if(s.count(tmp) != 0) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}