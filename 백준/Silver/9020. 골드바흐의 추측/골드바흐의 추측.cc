#include <cmath>
#include <iostream>
using namespace std;

int A, B, minvalue = 10001;

bool check_prime(int N){
    if(N == 1)
        return false;

    for(int i = 2; i * i <= N; ++i){
        if(N % i == 0)
            return false;
    }
    return true;
}

void gold_bach(int N){
    minvalue = 10001;
    
    for(int i = 1; i <= N / 2; ++i){
        if(check_prime(i) && check_prime(N - i)){//둘 다 소수면
            if(minvalue > abs(N - 2 * i)){
                A = i, B = N - i;
                minvalue = abs(N - 2 * i);
            }
                
        }
    }
    cout << A << ' ' << B << '\n';
}

int main(){
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        gold_bach(N);
    }
    return 0;
}