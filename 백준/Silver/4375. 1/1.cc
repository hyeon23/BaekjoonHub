#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    while(!(cin >> n).eof()){
        long long start = 1;
        int length = 1;
        while(start % n != 0){
            start = (start * 10 + 1) % n;
            ++length;
        }
        cout << length << '\n';
    }
    return 0;
}