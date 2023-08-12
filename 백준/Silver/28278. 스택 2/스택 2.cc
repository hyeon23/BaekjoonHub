#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> stk;
    int N, cmd;
    cin >> N;
    while(N--){
        cin >> cmd;
        if(cmd == 1){
            int tmp;
            cin >> tmp;
            stk.push(tmp);
        }
        else if(cmd == 2){
            if(!stk.empty()){
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if(cmd == 3)
            cout << stk.size() << '\n';
        else if(cmd == 4){
            if(stk.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(cmd == 5){
            if(!stk.empty())
                cout << stk.top() << '\n';
            else
                cout << -1 << '\n';
        }
    }
}