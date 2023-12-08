#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, height;
    cin >> N;
    stack<pair<int, int>> stk;
    stk.push({100000001, 0});
    for(int i = 1; i <= N; ++i){
        cin >> height;
        while(!stk.empty() && stk.top().first < height) stk.pop();
        cout << stk.top().second << ' ';
        stk.push({height, i});
    }
    return 0;
}