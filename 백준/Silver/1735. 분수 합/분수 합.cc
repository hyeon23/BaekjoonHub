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
    int J1, J2, M1, M2;

    cin >> J1 >> M1 >> J2 >> M2;

    int JT = J1 * M2 + J2 * M1;
    int MT = M1 * M2;
    
    cout << JT / gcd(JT, MT) << " " << MT / gcd(JT, MT);
}