#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> X(N);
    vector<int> L(N);
    vector<char> C(N);

    for(int i = 0; i < N; ++i){
        cin >> X[i];
    }

    for(int i = 0; i < N; ++i){
        cin >> L[i];
    }

    for(int i = 0; i < N; ++i){
        cin >> C[i];
    }

    bool trigger = false;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            if(i == j) continue;

            if(abs(X[i] - X[j]) <= L[i] + L[j]){
                if(C[i] != C[j]){
                    cout << "YES" << '\n';
                    cout << i + 1 << ' ' << j + 1;
                    trigger = true;
                    return 0;
                }
            }
        }
    }

    if(!trigger) cout << "NO";

    return 0;
}