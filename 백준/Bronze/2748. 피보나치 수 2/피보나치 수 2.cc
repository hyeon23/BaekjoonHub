#include <iostream>
using namespace std;

int N;
long long arr[91] = {0, 1, };

long long Fibonacci(int N){
    if(N == 0 || N == 1)
        return arr[N];
    else{
        if(arr[N] == 0)
            arr[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
    }
    return arr[N];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    cout << Fibonacci(N);
    return 0;
}