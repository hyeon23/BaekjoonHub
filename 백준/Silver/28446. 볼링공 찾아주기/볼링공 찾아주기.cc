#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M, cmd, x, w;
    cin >> M;
    unordered_map<int, int> ballings;

    while(M--){
        cin >> cmd;

        if(cmd == 1){
            cin >> x >> w;
            ballings[w] = x;
        }
        else if(cmd == 2){
            cin >> w;
            cout << ballings.find(w)->second << '\n';
        }
    }
    return 0;
}