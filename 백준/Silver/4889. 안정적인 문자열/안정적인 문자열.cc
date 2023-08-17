#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main(){
    string str;
    int cnt = 1;
    while(cin >> str){
        deque<char> stk;
        if(str[0] == '-') break;
        int ans = 0;
        for(int i = 0; i < str.size(); ++i){
            if(str[i] == '{')
                stk.push_back('{');
            else if(str[i] == '}'){
                if(stk.empty())
                    stk.push_back('}');
                else{
                    if(stk.back() == '{')
                        stk.pop_back();
                    else
                        stk.push_back('}');
                }
            }
        }
        while(!stk.empty()){
            char t = stk.back();

            stk.pop_back();

            if(t == '{' && stk.back() == '{'){
                stk.pop_back();
                ans += 1;
            }
            else if(t == '{' && stk.back() == '}'){
                stk.pop_back();
                ans += 2;
            }
            else if(t == '}' && stk.back() == '{'){
                stk.pop_back();
            }
            else if(t == '}' && stk.back() == '}'){
                stk.pop_back();
                ans += 1;
            }
        }
        cout << cnt << ". " << ans << '\n';
        ++cnt;
    }

}