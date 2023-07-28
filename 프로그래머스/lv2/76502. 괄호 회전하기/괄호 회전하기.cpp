#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string tmp){
    stack<int> stk;
    for(int i = 0; i < tmp.size(); ++i){
        if(stk.top() == '[' && tmp[i] == ']')
            stk.pop();
        else if(stk.top() == '(' && tmp[i] == ')')
            stk.pop();
        else if(stk.top() == '{' && tmp[i] == '}')
            stk.pop();
        else
            stk.push(tmp[i]);
    }
    return stk.empty();
}

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < s.size(); ++i){
        if(check(s))
            ++answer;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    return answer;
}