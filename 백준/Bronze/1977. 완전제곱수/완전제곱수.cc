#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, N, sum = 0, min = 10001;
    cin >> M >> N;

    bool trigger = false;

    for(int i = M; i <= N; ++i){
        if((int)sqrt(i) * (int)sqrt(i) == i){
            sum += i;
            trigger = true;
            if(min > i) min = i;
        }
    }

    if(trigger){
        cout << sum << '\n';
        cout << min;
    }
    else{
        cout << -1;
    }
    return 0;
}