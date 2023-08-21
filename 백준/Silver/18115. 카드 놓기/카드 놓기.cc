#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, cmd;
    deque<pair<int, int>> deq;
    cin >> N;
    int* vec = new int[N];
    for(int i = 1; i <= N; ++i)
        deq.push_back({i - 1, 0});
    int level = N + 1;
    for(int i = 1; i <= N; ++i){
        level--;
        cin >> cmd;
        if(cmd == 1){
            if(!deq.empty()) {
                vec[deq.front().first] = level;
                deq.pop_front();
            }
        }
        else if(cmd == 2){
            if(deq.size() >= 2){
                pair<int, int> tmp = deq.front();
                deq.pop_front();
                vec[deq.front().first] = level;
                deq.pop_front();
                deq.push_front(tmp);
            } 
        }
        else if(cmd == 3){
            if(deq.size() >= 2){
                vec[deq.back().first] = level;
                deq.pop_back();
            } 
        }
    }
    for(int i = 0; i < N; ++i)
        cout << vec[i] << ' ';
}