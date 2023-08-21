#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, cmd, tmp;
    cin >> N;

    deque<int> deq;

    while(N--){
        cin >> cmd;

        if(cmd == 1){
            cin >> tmp;
            deq.push_front(tmp);
        }
        else if(cmd == 2){
            cin >> tmp;
            deq.push_back(tmp);
        }
        else if(cmd == 3){
            if(deq.empty()) cout << -1 << '\n';
            else {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        else if(cmd == 4){
            if(deq.empty()) cout << -1 << '\n';
            else {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if(cmd == 5){
            if(deq.empty()) cout << 0 << '\n';
            else cout << deq.size() << '\n';
        }
        else if(cmd == 6){
            if(deq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(cmd == 7){
            if(deq.empty()) cout << -1 << '\n';
            else cout << deq.front() << '\n';
        }
        else if(cmd == 8){
            if(deq.empty()) cout << -1 << '\n';
            else cout << deq.back() << '\n';
        }
    }
}