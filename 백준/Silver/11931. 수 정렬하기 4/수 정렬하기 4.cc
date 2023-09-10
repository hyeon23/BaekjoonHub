#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, tmp;
    cin >> N;
    set<int, greater<int>> s;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        s.insert(tmp);
    }

    for(int i : s){
        cout << i << '\n';
    }
    return 0;
}