#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S, a, b;
    int n, cmd;
    cin >> S >> n;
    while(n--){
        cin >> cmd;
        if(cmd == 1){
            cin >> a >> b;
            if(a == b) continue;
            while(S.find(a) != string::npos){
                S.replace(S.find(a), a.size(), b);
            }
        }
        else if(cmd == 2){
            cout << S << '\n';;
        }
    }
}