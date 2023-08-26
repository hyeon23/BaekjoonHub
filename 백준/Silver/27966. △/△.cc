#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    //두 정점 사이 거리의 합의 최솟값
    //간선 정보
    cout << (N-1)*(N-1) << '\n';
    for(long long i = 2; i <= N; ++i)
        cout << "1" << ' ' << i << '\n';
}