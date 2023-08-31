#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B){
    if(A % B == 0) return B;
    else return gcd(B, A % B);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, x, y;
    cin >> N;
    map<pair<int, int>, int> m;
    int xpcnt = 0, xmcnt = 0, ypcnt = 0, ymcnt = 0;

    for(int i = 0; i < N; ++i){
        cin >> x >> y;
        if(x != 0 && y != 0){
            int nx;
            int ny;

            int absx = abs(x);
            int absy = abs(y);

            nx = x / gcd(absx, absy);
            ny = y / gcd(absx, absy);

            m[{nx, ny}]++;
        }
        else if(x == 0 && y > 0) xpcnt++;
        else if(x == 0 && y < 0) xmcnt++;
        else if(y == 0 && x > 0) ypcnt++;
        else if(y == 0 && x < 0) ymcnt++;
        
    }
    int ma = 0;
    for(auto i : m) ma = max(ma, i.second);

    int max1 = max(xpcnt, xmcnt);
    int max2 = max(ypcnt, ymcnt);


    ma = max(max(max1, max2), ma);
    cout << ma;
    return 0;
}