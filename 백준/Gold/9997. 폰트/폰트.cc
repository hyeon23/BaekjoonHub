#include <bits/stdc++.h>
using namespace std;
int N, ans, a[25];
void sol(int n, int b){
    if(n == N){
        //모든 bit = 1 -> 모든 알파벳이 존재 -> ans++
        if(b == (1<<26)-1) ++ans;
        return;
    }
    sol(n+1, b);
    sol(n+1, b|a[n]);
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        int b = 0;
        //i번째 문자열 알파벳 보유 bit 체크
        for(auto c : s) b |= (1 << (c - 'a'));
        //i번쨰 문자열의 알바벳 보유 bit 할당
        a[i] = b;
    }
    sol(0, 0);
    cout << ans;
}