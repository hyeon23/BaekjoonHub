#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;
int main(){
    string str;
    cin >> str;

    stack<char> stk;

    for(char c : str){
        if(!stk.empty() && stk.top() == '('){
            if(c == ')')
                stk.pop();
            else if(c == '(')
                stk.push(c);
        }
        else
            stk.push(c);
    }
    cout << stk.size();
}