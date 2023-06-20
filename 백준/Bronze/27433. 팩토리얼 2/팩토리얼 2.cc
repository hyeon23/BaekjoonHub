#include <iostream>

using namespace std;

int main(){
    int N;
    unsigned long long sum = 1;

    cin >> N;

    for(int i = 1; i <= N; ++i){
        sum *= i;
    }

    cout << sum;
}