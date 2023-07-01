#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int x, sum = 0;
    for(int i = 0; i < 5; ++i){
        cin >> x;
        sum += pow(x, 2);
    }

    cout << sum % 10;
}