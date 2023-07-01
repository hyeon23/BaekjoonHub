#include <iostream>
using namespace std;

int gcd(int x, int y){
    if(x % y == 0){
        return y;
    }
    else{
        return gcd(y, x % y);
    }
}

int lcm(int x, int y){
    return x * y / gcd(x, y);
}

int main(){
    int X, Y;
    cin >> X >> Y;
    cout << gcd(X, Y) << '\n' << lcm(X, Y);
}

