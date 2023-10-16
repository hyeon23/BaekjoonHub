#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, B;
    cin >> A >> B;

    int a = 1;
    int b = 2 * A;
    int c = B;

    double x1 = (-b * a + sqrt(b * b - 4 * a * c)) / 2;
    double x2 = (-b * a - sqrt(b * b - 4 * a * c)) / 2;

    if(x1 == x2) cout << x1;
    else cout << min(x1, x2) << ' ' << max(x1, x2);

    return 0;
}