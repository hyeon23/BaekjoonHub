#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp, dasome, cnt = 0;
    cin >> N >> dasome;
    priority_queue<int> pq;

    for(int i = 1; i < N; ++i){
        cin >> tmp;
        pq.push(tmp);
    }
    while(!pq.empty() && dasome <= pq.top()){
        dasome++;
        int t = pq.top() - 1;
        pq.push(t);
        pq.pop();
        cnt++;
    }
    cout << cnt;

    return 0;
}