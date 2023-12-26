#include <bits/stdc++.h>
using namespace std;
int N, r, c, idx = 1;
void recursion(int x, int y, int n){
    int len = pow(2, n);
    if(n == 1){
        if(x == r && y == c) {
            cout << idx - 1;
            return;
        }
        ++idx;
        if(x == r && y+1 == c) {
            cout << idx - 1;
            return;
        }
        ++idx;
        if(x+1 == r && y == c) {
            cout << idx - 1;
            return;
        }
        ++idx;
        if(x+1 == r && y+1 == c) {
            cout << idx - 1;
            return;
        }
        ++idx;
        return;
    }
    else{
        if(r < x + len / 2 && c < y + len / 2) {
            recursion(x, y, n-1);
        }
        else if(r < x + len / 2 && c >= y + len / 2) {
            idx += pow(pow(2, n-1), 2);
            recursion(x, y + len / 2, n-1);
        }
        else if(r >= x + len / 2 && c < y + len / 2) {
            idx += 2 * pow(pow(2, n-1), 2);
            recursion(x + len / 2, y, n-1);
        }
        else if(r >= x + len / 2 && c >= y + len / 2) {
            idx += 3 * pow(pow(2, n-1), 2);
            recursion(x + len / 2, y + len / 2, n-1);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N >> r >> c;
    recursion(0, 0, N);
    return 0;
}