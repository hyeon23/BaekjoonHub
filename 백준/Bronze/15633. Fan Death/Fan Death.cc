#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    //약수의 합을 구하라
    for(int i = 1; i <= n; ++i){
        if(n % i == 0) sum += i;
    }
    cout << sum * 5 - 24;
    return 0;
}