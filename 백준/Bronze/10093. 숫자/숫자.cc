#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if(A > B) swap(A, B);
    if(B - A - 1 == -1) cout << 0;
    else cout << B - A - 1 << '\n';
    for(int i = A + 1; i < B; ++i){
        if(i == B - 1) cout << i;
        else cout << i << ' ';
    }
    return 0;
}