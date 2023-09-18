#include <bits/stdc++.h>
using namespace std;

int main(){
    //해시함수 -> 자료의 저장과 탐색에 쓰임
    int N;
    cin >> N;

    string str;
    cin >> str;

    long long sum = 0;

    for(int i = 0; i < N; ++i){
        sum += (((str[i] - 'a' + 1) % 1234567891) * ((long long)powl(31, i) % 1234567891)) % 1234567891;
    }

    cout << sum;

    return 0;
}