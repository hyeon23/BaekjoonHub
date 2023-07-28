#include <string>
#include <vector>

using namespace std;

vector<long long> fiboarr(2001, -1);

unsigned long long fibonacci(int N){
    if(fiboarr[N] != -1)
        return fiboarr[N];
    
    fiboarr[N] = ((fibonacci(N - 1)) + (fibonacci(N - 2))) % 1234567;
    return fiboarr[N];
}

unsigned long long solution(int n) {
    unsigned long long answer = 0;
    //n = 0 -> 0
    //n = 1 -> 1
    //n = 2 -> 2
    //n = 3 -> 3
    //n = 4 -> 5
    //n = k -> f(n-1) + f(n-2); => fibonacci(조합 풀이도 가능)
    //시간 초과 => DP[메모리]를 사용한 피보나치
    
    fiboarr[0] = 1;
    fiboarr[1] = 1;
    
    return fibonacci(n);
}