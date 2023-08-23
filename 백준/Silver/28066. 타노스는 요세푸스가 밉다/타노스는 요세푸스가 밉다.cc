#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    deque<int> deq;
    //1 2 3 4 5
    for(int i = 1; i <= N; ++i)
        deq.push_back(i);
    while(deq.size() > 1){
        int first = deq.front();//첫 청설모
        deq.pop_front();
        if(deq.size() < K - 1)//작으면, 
            while(!deq.empty())
                deq.pop_front();
        else
            for(int i = 0; i < K - 1; ++i)
                deq.pop_front();
        deq.push_back(first);
    }
    cout << deq.front();
}