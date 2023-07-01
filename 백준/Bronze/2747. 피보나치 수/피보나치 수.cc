#include <iostream>
using namespace std;

int arr[45] = {0, 1, 1, 0,};

int Fibonacci(int N){
    if(arr[N] == 0)
        arr[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
    return arr[N];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    cout << Fibonacci(N);
}