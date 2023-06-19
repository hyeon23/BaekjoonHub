#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
    int N, x;
    string s;
    deque<int> deque;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> s;

        if(s == "push_front"){
            cin >> x;
            deque.push_front(x);
        }
        else if(s == "push_back"){
            cin >> x;
            deque.push_back(x);
        }
        else if(s == "pop_front"){
            if(deque.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << deque.front() << '\n';
                deque.pop_front();
            }
        }
        else if(s == "pop_back"){
            if(deque.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << deque.back() << '\n';
                deque.pop_back();
            }
        }
        else if(s == "size"){
            cout << deque.size() << '\n';
        }
        else if(s == "empty"){
            if(deque.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(s == "front"){
            if(deque.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << deque.front() << '\n';
            }
        }
        else if(s == "back"){
            if(deque.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << deque.back() << '\n';
            }
        }
    }

    return 0;
}