#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, cnt = 0;;
    cin >> N;
    for(int a = 1; a < 501; ++a){
        for(int b = 1; b <= 501; ++b){
            if(a * a == b * b + N) ++cnt;
        }
    }
    cout << cnt;
    return 0;
}