#include <bits/stdc++.h>
using namespace std;

int main(){
    //양 하루에 a그램, 염소 하루에 b그램
    int a, b, n, w;
    cin >> a >> b >> n >> w;

    int cnt = 0, num1, num2;

    for(int i = 1; i <= 1000; ++i){
        for(int j = 1; j <= 1000; ++j){
            if(i * a + j * b > w) break;
            else if(i + j == n && i * a + j * b == w){
                ++cnt;
                num1 = i; num2 = j;
            }
        }   
    }

    if(cnt != 1) cout << -1;
    else cout << num1 << ' ' << num2;

    return 0;
}