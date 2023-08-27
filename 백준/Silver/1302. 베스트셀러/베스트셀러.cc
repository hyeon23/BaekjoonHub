#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    int N, cnt;
    cin >> N;
    string s;
    while(N--){
        cin >> s;
        m[s]++;
    }
    for(auto p : m) cnt = max(cnt, p.second);
    for(auto p : m){
        if(p.second == cnt){
            cout << p.first;
            return 0;
        }
    }
}