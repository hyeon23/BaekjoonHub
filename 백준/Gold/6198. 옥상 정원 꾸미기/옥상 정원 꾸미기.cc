#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    stack<int> s;
    long long answer = 0;
    cin >> count;

    for(int i=0;i<count;i++) {
        //새로운 높이 입력 받음
        int height;
        cin >> height;

        //1. 첫번째 건물은 바로 스택에 넣어줌
        if(s.empty()) {s.push(height); continue;}

        //2. i) 스택에 있는 건물들 중에, 현재 건물 보다 작은 건물들은 다 빼줍니다.
        while(!s.empty() && s.top() <= height)
            s.pop();

        //2. ii) 건물을 다 빼줬으면, 스택에 있는 개수만큼 답에 더해줍니다.
        answer += s.size();

        //2. iii) 해당 입력을 스택에 넣어줍니다.
        s.push(height);
    }

    cout << answer;
}