#include <iostream>
#include <vector>
using namespace std;

int divide(int x, int y){
    if(x % y == 0) return y;
    else return divide(y, x % y);
}

int lcm(int m, int n){
    return m * n / divide(m, n);
}

int main(){
    int T, A, B;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> A >> B;
        cout << lcm(A, B) << "\n";
    }
}