#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string target;
    getline(cin, target);

    string aim;
    getline(cin, aim);

    int cur = 0, ans = 0;

    while(target.find(aim, cur) != string::npos){

        cur = target.find(aim, cur) + aim.size();

        ans++;
    }

    cout << ans;

    return 0;
}