#include <bits/stdc++.h>
using namespace std;

int main(){
    //대 1개 -> 중 K개 -> 소 K * K개 -> 끝

    int N;
    cin >> N;

    for(int i = 0; i <= N; ++i){
        if(1 + i + i*i == N) {
            cout << i;
            return 0;
        }
    }
    return 0;
}