#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int N;
    cin >> N;
    string str;
    int cnt = 0;
    while(N--){
        cin >> str;
        stack<char> stk;
        for(int i = 0; i < str.size(); ++i){
            if(!stk.empty()){
                if(stk.top() == str[i])
                    stk.pop();
                else
                    stk.push(str[i]);
            }
            else
                stk.push(str[i]);
        }
        if(stk.empty()) cnt++;
    }
    cout << cnt;
}