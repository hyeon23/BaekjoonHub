#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, N, A;
    cin >> P >> N;

    vector<int> piro(N);

    for(int i = 0; i < N; ++i){
        cin >> piro[i];
    }


    sort(piro.begin(), piro.end());

    int cnt = 0;

    for(int i = 0; i < N; ++i){
        if(P < 200){
            P += piro[i];
            cnt++;
        }
        else{
            break;
        }
    }

    cout << cnt;
    
    return 0;
}