#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp;
    cin >> N;
    set<int> s;
    while(N--){
        cin >> tmp;
        s.insert(tmp);
    }

    for(auto i : s){
        cout << i << ' ';
    }
    return 0;
}