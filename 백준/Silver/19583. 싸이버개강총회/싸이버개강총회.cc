#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, E, Q, t, name;
    cin >> S >> E >> Q;
    int smin = stoi(S.substr(0, 2)) * 60 + stoi(S.substr(3, 2));
    int emin = stoi(E.substr(0, 2)) * 60 + stoi(E.substr(3, 2));
    int qmin = stoi(Q.substr(0, 2)) * 60 + stoi(Q.substr(3, 2));
    map<string, bool> m;
    int ans = 0;
    while(!(cin >> t >> name).eof()){
        int totalmin = stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3, 2));

        if(totalmin <= smin){
            m[name] = true;
        }
        else if(totalmin >= emin && totalmin <= qmin){
            if(m[name]){
                m[name] = false;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}