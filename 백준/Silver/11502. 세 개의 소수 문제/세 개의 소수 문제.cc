#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

vector<int> primes(MAX, true);

void eratos(){
    primes[0] = false;
    primes[1] = false;
    
    for(int i = 2; i*i <= MAX; ++i){
        if(!primes[i]) continue;//소수가 아니라면 => 다음 반복
        //소수라면
        for(int j = 2 * i; j <= MAX; j += i){
                primes[j] = false;
        }    
    }
}

int main(){
    eratos();

    int T;
    cin >> T;
    while(T--){
        int prime;
        cin >> prime;

        bool trigger = false;

        for(int i = 2; i <= prime; ++i){
            if(!primes[i]) continue;
            for(int j = i; j <= prime; ++j){
                if(!primes[j]) continue;
                for(int k = j; k <= prime; ++k){
                    if(!primes[k]) continue;
                    
                    if(i + j + k == prime) { 
                        cout << i << ' ' << j << ' ' << k << '\n';
                        trigger = true;
                        break;
                    }
                }
                if(trigger) break;
            }
            if(trigger) break;
        }
    }
    return 0;
}