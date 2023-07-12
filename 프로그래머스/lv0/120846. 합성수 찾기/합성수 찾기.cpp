#include <string>
#include <vector>

using namespace std;

bool isprime(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0)
            return false;
    }
    return true;
}

int solution(int n) {
    int answer = 0;
    //소수가 아니면 합성수
    for(int i = 2; i <= n; ++i)
        if(!isprime(i))
            answer++;
    return answer;
}