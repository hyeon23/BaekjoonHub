#include <bits/stdc++.h>
#define MAX 31
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int D, K;
    int A[MAX];
    int B[MAX];
    cin >> D >> K;
    A[1] = 1;
    A[2] = 0;
    B[1] = 0;
    B[2] = 1;
    for(int i = 3; i <= D; ++i){
        A[i] = A[i-1] + A[i-2];
        B[i] = B[i-1] + B[i-2];
    }
    for(int i = 1; i <= K; ++i){
        int spare = K - (A[D] * i);
        if(spare % B[D] == 0){
            cout << i << '\n' << spare / B[D] << '\n';
            return 0;
        }
    }
    return 0;
}