#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int M, K;
    cin >> M >> K;
    vector<int> pens(N);
    for(int i = 0; i < N; ++i){
        cin >> pens[i];
    }

    sort(pens.begin(), pens.end(), greater<int>());

    int totalPens = M * K;

    int mem = 0;

    for(int i = 0; i < pens.size(); ++i){
        mem++;
        totalPens -= pens[i];
        if(totalPens <= 0){
            break;
        }
    }

    if(totalPens <= 0) cout << mem;
    else cout << "STRESS";

    return 0;
}