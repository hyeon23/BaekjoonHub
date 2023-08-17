#include <iostream>
#include <string>
#include <stack>
#include <deque>
using namespace std;

int main(){
    int N;
    deque<pair<int, char>> deq;
    cin >> N;

    int cnt = 0;

    while(N--){
        int cmd;
        char c;
        cin >> cmd;

        if(cmd == 1){
            cin >> c;
            deq.push_back({cnt, c});
            ++cnt;
        }
        else if(cmd == 2){
            cin >> c;
            deq.push_front({cnt, c});
            ++cnt;
        }
        else if(cmd == 3){
            if(!deq.empty()){
                if(deq.back().first > deq.front().first){
                    deq.pop_back();
                }
                else{
                    deq.pop_front();
                }
            }
        }
    }

    if(deq.empty())
        cout << 0;
    else{
        while(!deq.empty()){
        cout << deq.front().second;
        deq.pop_front();
        }
    }
}