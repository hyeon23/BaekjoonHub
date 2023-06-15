#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(int x){
    if(x == 0 || x == 1){
        return false;
    }
    else{
        for(int i = 2; i <= sqrt(x); ++i){
            if(x % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int M, N;

    cin >> M >> N;

    if(M > N)
        swap(M, N);

    for(int i = M; i <= N; ++i){
        if(is_prime(i))
            cout << i << "\n";
    }
}