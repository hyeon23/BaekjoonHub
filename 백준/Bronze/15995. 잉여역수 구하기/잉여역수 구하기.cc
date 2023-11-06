#include <iostream>

using namespace std;

int extended_gcd(int a, int b, int& x, int& y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extended_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

int find_modular_inverse(int a, int m) {
    int x, y;
    int gcd = extended_gcd(a, m, x, y);
    if (gcd != 1) {
        return -1; // 역원이 존재하지 않음
    } else {
        x = (x % m + m) % m;
        return x;
    }
}

int main() {
    int a, m;
    cin >> a >> m;
    
    int result = find_modular_inverse(a, m);
    
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "a와 m은 서로소가 아닙니다." << endl;
    }
    
    return 0;
}