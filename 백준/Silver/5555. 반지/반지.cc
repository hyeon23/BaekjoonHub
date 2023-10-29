#include <bits/stdc++.h>
using namespace std;

int main(){
    string targetStr;
    cin >> targetStr;
    int N, ans = 0;
    cin >> N;
    for(int i = 0; i < N; ++i){
        string tmp;
        cin >> tmp;
        tmp += tmp;
        if(tmp.find(targetStr) != string::npos) ans++;
    }
    cout << ans;
    return 0;
}