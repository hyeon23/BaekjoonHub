#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N, height, answer = 0;
    stack<pair<long long, long long>> stk;
    cin >> N;
    cin >> height;
    stk.push({height, 0});
    for(long long i = 1; i < N; ++i){
        long long tmp = 0;
        cin >> height;
        while(!stk.empty() && stk.top().first <= height){
            if(stk.top().first == height){
                tmp = stk.top().second + 1;
                answer = answer + tmp;
                stk.pop();
            }
            else{
                answer = answer + stk.top().second + 1;
                stk.pop();
            }
        }
        if(!stk.empty() && stk.top().first >= height) ++answer;
        stk.push({height, tmp});
    }
    cout << answer;
    return 0;
}