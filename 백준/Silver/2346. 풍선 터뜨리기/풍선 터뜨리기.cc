#include <bits/stdc++.h>
using namespace std;

int main(){
    //원형큐 = 디큐
    int N, tmp;
    cin >> N;
    deque<pair<int, int>> deq;
    for(int i = 1; i <= N; ++i){
        cin >> tmp;
        deq.push_back({tmp, i});
    }
    while(!deq.empty()){
        //첫번째 풍선을 터트림
        pair<int, int> ball = deq.front();
        cout << ball.second << ' ';
        deq.pop_front();

        //이동
        if(ball.first > 0){
                for(int i = 0; i < abs(ball.first) - 1; ++i){
                    deq.push_back(deq.front());
                    deq.pop_front();
                }
            }
            else{
                for(int i = 0; i < abs(ball.first); ++i){
                    deq.push_front(deq.back());
                    deq.pop_back();
                }
            }
        
    }
}