#include <bits/stdc++.h>
using namespace std;

int main(){
    //해시함수 -> 자료의 저장과 탐색에 쓰임
    unsigned long long N;
    cin >> N;

    string str;
    cin >> str;

    unsigned long long sum = 0;

    for(unsigned long long i = 0; i < N; ++i){
        unsigned long long ai = (str[i] - 'a' + 1) % 1234567891;

        unsigned long long ri = 1;

        for(int j = 0; j < i; ++j){
            ri *= 31 % 1234567891;
        }
        
        sum += ai * ri % 1234567891;
    }

    cout << sum;

    return 0;
}