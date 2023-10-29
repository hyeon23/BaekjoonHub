#include <bits/stdc++.h>
using namespace std;

int main(){
    //수세개 연로 -> 지구 / 태양 / 달
    int EC = 1, SC = 1, MC = 1;
    int ET, ST, MT;

    cin >> ET >> ST >> MT;

    int EY = 1;

    while(!(EC == ET && SC == ST && MC == MT)){
        ++EY;

        if(EC >= 15) EC = 1;
        else ++EC;

        if(SC >= 28) SC = 1;
        else ++SC;

        if(MC >= 19) MC = 1;
        else ++MC;       
    }

    cout << EY;

    return 0;
}