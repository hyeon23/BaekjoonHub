#include <iostream>
using namespace std;

int Fibonacci(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return Fibonacci(x - 1) + Fibonacci(x - 2);
    }
}

int main(){
    int n;
    cin >> n;

    cout << Fibonacci(n);
}