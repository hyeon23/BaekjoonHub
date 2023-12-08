#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int count;
    stack<int> s;
    long long height, ans = 0;
    cin >> count;
    for(int i = 0; i < count; ++i){
        cin >> height;
        //2. i) 스택에 있는 건물 중, 현재 건물보다 작은 건물들을 모두 빼줌
        while(!s.empty() && s.top() <= height) s.pop();
        //2. ii) 건물을 다 빼줬으면, 스택에 있는 개수만큼 값에 더해줍니다.
        ans += s.size();
        //2. iii) 해당 입력을 스택에 넣어줍니다.
        s.push(height);
    }
    cout << ans;
}