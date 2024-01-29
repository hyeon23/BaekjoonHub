#include<bits/stdc++.h>
using namespace std;
int N;
string str;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while(cin >> str >> N){
        int cnt = 0;
        bool trigger = false;
        string tmp = str;
        while(cnt < N-1){
            ++cnt;
            if(!next_permutation(str.begin(), str.end())){
                trigger = true;
                break;
            }
        }
        if(trigger) cout << tmp << ' ' << N << " = " << "No permutation" << '\n';
        else cout << tmp << ' ' << N << " = " << str << '\n';
    }
}