#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    bool trigger = false;

    int cnt = 1;

    while(cin >> A >> B){
        if(A == "END" && B == "END") break;
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if(A == B) cout << "Case " << cnt << ": same" << '\n';
        else cout << "Case " << cnt << ": different" << '\n';
        cnt++;
    }
    return 0;
}