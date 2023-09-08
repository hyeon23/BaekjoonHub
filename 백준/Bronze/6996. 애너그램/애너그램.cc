#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string A, B;
        cin >> A >> B;
        string tmpA = A, tmpB = B;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        if(A == B) cout << tmpA + " & " + tmpB + " are anagrams." << '\n';
        else cout << tmpA + " & " + tmpB + " are NOT anagrams." << '\n';
    }
    return 0;
}