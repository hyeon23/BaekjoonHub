#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, kim, lim;
    int round = 0;

    cin >> N >> kim >> lim;
    
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

    //간단한 수학 문제
    //라운드가 올라갈때마다 자신의 번호는 (자신의 번호 + 1)/2

    while(kim != lim){
        kim = (kim+1)/2;
        lim = (lim+1)/2;
        ++round;
    }

    cout << round;

    return 0;
}