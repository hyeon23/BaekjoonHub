#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, Seed, X1, X2, a, c;
    cin >> m >> Seed >> X1 >> X2;

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < m; ++j){
            if((i * Seed + j) % m == X1){
                if((i * X1 + j) % m == X2){
                    a = i;
                    c = j;
                    break;
                }   
            }
        }    
    }
    cout << a << ' ' << c;
    return 0;
}