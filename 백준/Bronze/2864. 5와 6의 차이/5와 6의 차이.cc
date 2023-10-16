#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //숫자 5와 6을 혼동한다.

    string A, B;

    cin >> A >> B;

    string Amin, Amax, Bmin, Bmax;

    Amin = A;
    Amax = A;

    Bmin = B;
    Bmax = B;

    for(int i = 0; i < A.size(); ++i){
        if(A[i] == '5' || A[i] == '6'){
            Amin[i] = '5';
            Amax[i] = '6';
        }
    }

    for(int i = 0; i < B.size(); ++i){
        if(B[i] == '5' || B[i] == '6'){
            Bmin[i] = '5';
            Bmax[i] = '6';
        }
    }

    cout << stoi(Amin) + stoi(Bmin) << ' ' << stoi(Amax) + stoi(Bmax);

    return 0;
}