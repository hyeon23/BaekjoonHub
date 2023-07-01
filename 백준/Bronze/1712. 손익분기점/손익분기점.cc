#include <iostream>
using namespace std;

int main(){
    long long int a, b, c, totalPrice, curPrice, count = 1;
    cin >> a >> b >> c;

    if(b >= c){
        count = -1;
    }
    else{
        count = a / (c - b);
        count++;
    }

    cout << count;
}