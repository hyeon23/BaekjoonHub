#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X;
    cin >> N;
    queue<int> q;
    while(N--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            cin >> X;
            q.push(X);
        }
        else if(cmd == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(cmd == "size"){
            cout << q.size() << '\n';
        }
        else if(cmd == "empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(cmd == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if(cmd == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
}