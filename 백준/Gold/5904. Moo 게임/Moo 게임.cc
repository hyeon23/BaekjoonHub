#include <bits/stdc++.h>
using namespace std;
int N;
string moo = "moo";
void sol(int n, int k, int len){
    int new_len = 2 * len + k + 3;//다음 moostr의 길이
    //N <= 3 -> moo에 따른 값 출력
    if(n <= 3){
        cout << moo[n-1];
        return;
    }
    if(new_len < n){//다음 moostr이 n보다 작을 경우 N은 앞쪽 S(k-1)에 위치
        sol(n, k+1, new_len);
    }
    else{
    //new_len > n일 경우 -> 현재 중간 범위 내에 들어옴(N은 1 - len 사이 수가 아님)
    ///(len - len + k + 3) 사이 범위를 확인하고, 
    //그 사이 수의 경우 n = len + 1의 경우 m을
    //아닐경우 o를 출력한다.
        if(n > len && n <= len + k + 3){
            if(n == len + 1) cout << "m";
            else cout << "o";
            return;
        }
        //그 수가 아니라면 N은 뒤쪽 S(k-1)에 위치
        else{
            sol(n-(len+k+3), 1, 3);
        }
    }
}
int main(){
    cin >> N;
    sol(N, 1, 3);
    return 0;
}