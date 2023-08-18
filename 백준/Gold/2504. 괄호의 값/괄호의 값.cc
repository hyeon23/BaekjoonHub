#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> stk;
    int sum = 0;
    int temp = 1;
    bool check = true;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '('){
            stk.push(s[i]);
            temp *= 2;
        }
        else if(s[i] == ')'){
            if(stk.empty() || stk.top() != '('){
                check = false;
                break;
            }
            else{
                if(s[i-1] == '('){
                    sum += temp;
                }
                stk.pop();
                temp /= 2;
            }
        }
        else if(s[i] == '['){
            stk.push(s[i]);
            temp *= 3;
        }
        else if(s[i] == ']'){
            if(stk.empty() || stk.top() != '['){
                check = false;
                break;
            }
            else{
                if(s[i-1] == '['){
                    sum += temp;
                }
                stk.pop();
                temp /= 3;
            }
        }
    }

    if(!check || !stk.empty()) cout << '0';
    else cout << sum;
}