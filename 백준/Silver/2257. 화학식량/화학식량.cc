#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int ans = 0;
    stack<pair<char, int>> stk;
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); ++i){
        if(isdigit(str[i])){
            if(!stk.empty()){
                stk.top().second = stk.top().second * (str[i] - '0');
            }
        }
        else if(isalpha(str[i])){
            if(str[i] == 'H'){
                stk.push({'H', 1});
            }
            else if(str[i] == 'C'){
                stk.push({'C', 12});
            }
            else if(str[i] == 'O') {
                stk.push({'O', 16});
            }   
        }
        else if(str[i] == '('){
            stk.push({'(', 0});
        }
        else if(str[i] == ')'){
            while(stk.top().first != '('){
                int tmp = stk.top().second;
                stk.pop();
                stk.top().second += tmp;
            }
            if(stk.top().first == '('){
                stk.top().first = 'E';
            }
        }
    }
    while(!stk.empty()){
        ans += stk.top().second;
        stk.pop();
    }
    cout << ans;
}