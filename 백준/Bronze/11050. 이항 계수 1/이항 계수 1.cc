#include <iostream>
using namespace std;

//이항계수(n k)의 정의를 알아야 함
//=nCk
//이항식을 이항정리로 전개했을 때, 각 항의 계수

int factorial(int x){
    int temp = 1;
    for(int i = 1; i <= x; ++i)
        temp *= i;
    return temp;
}

int main(){
    int N, K;
    cin >> N >> K;
    cout << factorial(N) / (factorial(K) * factorial(N - K));
}