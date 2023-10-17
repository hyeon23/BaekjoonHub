#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string N;
    int F;

    cin >> N >> F;

    for(int i = 0; i <= 9; ++i){
        for(int j = 0; j <= 9; ++j){
            N[N.size()-2] = i + '0';
            N[N.size()-1] = j + '0';

            if(stoll(N) % F == 0){
                cout << i << j;
                return 0;
            }
        }
    }
    return 0;
}