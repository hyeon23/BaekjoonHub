#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B){
    if(A % B == 0)
        return B;
    else
        return gcd(B, A % B);
}

int main(){
    int N, x, y;

    cin >> N;
    set<pair<int, int>> s;

    int cnt = 0;

    bool xpfull = false, xmfull = false, ypfull = false, ymfull = false;

    while(N--){
        cin >> x >> y;

        if(x == 0 && y > 0){
            if(!xpfull){
                ++cnt;
                xpfull = true;
            }
        }
        else if(x == 0 && y < 0){
            if(!xmfull){
                ++cnt;
                xmfull = true;
            }
        }
        else if(y == 0 && x > 0){
            if(!ypfull){
                ++cnt;
                ypfull = true;
            }
        }
        else if(y == 0 && x < 0){
            if(!ymfull){
                ++cnt;
                ymfull = true;
            }
        }
        else{
            int ax = abs(x);
            int ay = abs(y);
            int nx = ax / gcd(ax, ay);
            int ny = ay / gcd(ax, ay);
            if(x < 0) nx *= -1;
            if(y < 0) ny *= -1;

            s.insert({nx, ny});
        }
    }
    cout << cnt + s.size();
}