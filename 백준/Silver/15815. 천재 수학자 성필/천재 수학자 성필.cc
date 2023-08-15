#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string str;
    stack<int> stk;
    cin >> str;
    for(char c : str){
        if(isdigit(c))
            stk.push(c - '0');
        else{
            int A = stk.top();
            stk.pop();
            int B = stk.top();
            stk.pop();
            if(c == '+')
                stk.push(B + A);
            else if(c == '-')
                stk.push(B - A);
            else if(c == '*')
                stk.push(B * A);
            else if(c == '/')
                stk.push(B / A);
        }
    }

    cout << stk.top();
}