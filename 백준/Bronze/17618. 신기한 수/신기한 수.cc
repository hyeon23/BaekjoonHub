#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int ans = 0;

    for(int i = 1; i <= N; ++i){
        string str = to_string(i);
        int sum = 0;
        for(int i = 0; i < str.size(); ++i){
            sum += str[i] - '0';
        }
        if(i % sum == 0) ++ans;
    }
    cout << ans;
    return 0;
}