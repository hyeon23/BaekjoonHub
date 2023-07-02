#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int factorialCount(int N){
    if(N == 0)
        return 0;

    int sum = 0;
    sum += N / pow(5, 1);
    sum += N / pow(5, 2);
    sum += N / pow(5, 3);
    sum += N / pow(5, 4);
    
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    cout << factorialCount(N);
}