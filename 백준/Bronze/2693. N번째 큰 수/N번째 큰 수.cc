#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        vector<int> A(10);
        for(int i = 0; i < 10; ++i)
            cin >> A[i];
        sort(A.begin(), A.end(), greater<int>());
        cout << A[2] << '\n';
    }
    return 0;
}