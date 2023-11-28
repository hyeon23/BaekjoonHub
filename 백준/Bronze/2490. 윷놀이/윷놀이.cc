#include <bits/stdc++.h>
using namespace std;

int main(){
    string res = "DCBAE";
    for(int i = 0; i < 3; ++i){
        int bcnt = 0;
        for(int j = 0; j < 4; ++j){
            int tmp;
            cin >> tmp;
            bcnt += tmp;
        }
        cout << res[bcnt] << '\n';
    }
    return 0;
}