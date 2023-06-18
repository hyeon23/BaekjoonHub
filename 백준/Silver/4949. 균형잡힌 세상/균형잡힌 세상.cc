#include <stack>
#include <string>
#include <iostream>
using namespace std;

void checkspace(string& str){

}

int main(){
    string str;

    while(getline(cin, str)){
        if(str == ".")
            break;

        stack<char> stk;

        for(int i = 0; i < str.size(); ++i){
            if(str[i] == '(' || str[i] == '['){
                stk.push(str[i]);
            }
            else if(str[i] == ')'){
                if(stk.empty()){
                    stk.push(str[i]);
                }
                else{
                    if(stk.top() == '(')
                        stk.pop();
                    else
                        stk.push(str[i]);
                }
            }
            else if(str[i] == ']'){
                if(stk.empty()){
                    stk.push(str[i]);
                }
                else{
                    if(stk.top() == '[')
                        stk.pop();
                    else
                        stk.push(str[i]);
                }
            }
        }

        if(!stk.empty())
            cout << "no" << '\n';
        else
            cout << "yes" << '\n';
    }
}