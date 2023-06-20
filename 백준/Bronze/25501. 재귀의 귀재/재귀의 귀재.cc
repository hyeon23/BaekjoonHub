#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

static int cnt = 0;
//1: mysol: 시간초과 -> & 보내는 것으로 해결
int recursion(string& s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string& s){
    return recursion(s, 0, s.size() - 1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    string s;

    cin >> T;

    while(T--){
        cnt = 0;
        cin >> s;

        cout << isPalindrome(s) << " " << cnt << '\n';
    }
}