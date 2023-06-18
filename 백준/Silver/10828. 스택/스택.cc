#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int N;
    stack<int> stk;
    cin >> N;

    while(N--){
        int temp;
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            cin >> temp;
            stk.push(temp);
        }
        if(cmd == "pop"){
            if(stk.empty()){//스택이 빈 상태
                cout << -1 << '\n';
            }
            else{//스택이 차있는 상태
                cout << stk.top() << '\n';
                stk.pop();
            }
            
        }
        else if(cmd == "size"){
            cout << stk.size() << '\n';
        }
        else if(cmd == "empty"){
            if(stk.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(cmd == "top"){
            if(stk.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << stk.top() << '\n';
            }
        }
    }
}