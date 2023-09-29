#include <bits/stdc++.h>
using namespace std;

int main(){
    int ax, ay, az;
    int bx, by, bz;
    cin >> ax >> ay >> az;
    cin >> bx >> by >> bz;

    cout << (bx - az) << ' ' << (by / ay) << ' ' << (bz - ax);
    return 0;
}