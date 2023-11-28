#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp, ycost = 0, mcost = 0;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        ycost = ycost + ((tmp / 30) + 1) * 10;
        mcost = mcost + ((tmp / 60) + 1) * 15;
    }
    if(ycost > mcost) cout << "M" << ' ' << mcost;
    else if(ycost < mcost) cout << "Y" << ' ' << ycost;
    else cout << "Y" << ' ' << "M" << ' ' << ycost;
    return 0;
}