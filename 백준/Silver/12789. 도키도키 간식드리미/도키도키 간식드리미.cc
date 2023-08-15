#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int N, tmp, cur = 1;
    stack<int> stk;
    queue<int> q;
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> tmp;
        q.push(tmp);
    }
    
    while(!q.empty()){
        if(q.front() == cur){
            ++cur;
            q.pop();
        }
        else{
            if(!stk.empty()){
                if(stk.top() == cur){
                    ++cur;
                    stk.pop();
                }
                else if(stk.top() > q.front()){
                    stk.push(q.front());
                    q.pop();
                }
                else{
                    cout << "Sad";
                    return 0;
                }
            }
            else{
                stk.push(q.front());
                q.pop();
            }
        }
    }
    cout << "Nice";
}