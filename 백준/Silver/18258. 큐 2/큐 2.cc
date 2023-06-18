#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    string cmd;
    queue<int> queue;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> cmd;
        if(cmd == "push"){
            int x;
            cin >> x;
            queue.push(x);
        }
        else if(cmd == "pop"){
            if(queue.empty())
                cout << -1 << '\n';
            else{
                cout << queue.front() << '\n';
                queue.pop();
            }
        }
        else if(cmd == "size"){
            cout << queue.size() << '\n';
        }
        else if(cmd == "empty"){
            if(queue.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if(cmd == "front"){
            if(queue.empty()){
                cout << -1 << '\n';
            }  
            else{
                cout << queue.front() << '\n';
            }
        }
        else if(cmd == "back"){
            if(queue.empty()){
                cout << -1 << '\n';
            }  
            else{
                cout << queue.back() << '\n';
            }
        }
    }
}