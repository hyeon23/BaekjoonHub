#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    multiset<long long> s;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> str;
        reverse(str.begin(), str.end());
        s.insert(stoll(str));
    }
    
    for(auto i : s){
        cout << i << '\n';
    }
}