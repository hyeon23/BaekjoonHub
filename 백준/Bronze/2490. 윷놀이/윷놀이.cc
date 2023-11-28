#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i = 0; i < 3; ++i){
        int bcnt = 0;
        for(int j = 0; j < 4; ++j){
            int tmp;
            cin >> tmp;
            if(tmp == 0) ++bcnt;
        }

        if(bcnt == 0) cout << "E\n";
        else if(bcnt == 1) cout << "A\n";
        else if(bcnt == 2) cout << "B\n";
        else if(bcnt == 3) cout << "C\n";
        else if(bcnt == 4) cout << "D\n";

    }
    return 0;
}