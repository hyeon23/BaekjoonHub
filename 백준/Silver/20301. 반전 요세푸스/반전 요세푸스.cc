#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, K, M;
    cin >> N >> K >> M;
    deque<int> deq;
    for(int i = 1; i <= N; ++i)
        deq.push_back(i);
    int cnt = 0;
    bool dir = false;
    while(!deq.empty()){
        if(cnt % M == 0)//방향 전환
            dir = !dir;
        if(dir){//true = 오른쪽 회전 처리
            for(int i = 0; i < K - 1; ++i){
                deq.push_back(deq.front());
                deq.pop_front();
            }
        }
        else{//false = 왼쪽 회전 처리
            for(int i = 0; i < K; ++i){
                deq.push_front(deq.back());
                deq.pop_back();
            }
        }
        cout << deq.front() << '\n';
        deq.pop_front();
        cnt++;
    }

    
}