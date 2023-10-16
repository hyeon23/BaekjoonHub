#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, cnt = 0;
    cin >> N;

    int cur = 1000 - N;

    while(cur != 0){
        if(cur >= 500){
            cur -= 500;
        }
        else if(cur >= 100){
            cur -= 100;
        }
        else if(cur >= 50){
            cur -= 50;
        }
        else if(cur >= 10){
            cur -= 10;
        }
        else if(cur >= 5){
            cur -= 5;
        }
        else if(cur >= 1){
            cur -= 1;
        }
        ++cnt;
    }
    cout << cnt;
    return 0;
}