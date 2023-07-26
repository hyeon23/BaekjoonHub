#include <string>
#include <vector>

using namespace std;

vector<unsigned long long> FibonacciArr(100001, -1);
int Fibonacci(int N){
    if(FibonacciArr[N] != -1)
        return FibonacciArr[N] % 1234567;
    
    if(N == 0)
        FibonacciArr[0] = 0;
    else if(N == 1)
        FibonacciArr[1] = 1;
    else
        FibonacciArr[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
    return FibonacciArr[N] % 1234567;
}

unsigned long long solution(int n) {
    return Fibonacci(n);
}