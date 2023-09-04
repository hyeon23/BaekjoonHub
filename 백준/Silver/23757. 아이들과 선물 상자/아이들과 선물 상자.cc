#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, gift;
    cin >> N >> M;

    priority_queue<int> pq;

    for(int i = 0; i < N; ++i){
        cin >> gift;
        pq.push(gift);
    }

    for(int i = 0; i < M; ++i){
        cin >> gift;

        if(!pq.empty()){
            if(pq.top() >= gift){
            if(pq.top() - gift != 0)
                pq.push(pq.top() - gift);
            pq.pop();
            }
            else{
                cout << 0;
                return 0;
            }
        }
        else{
            cout << 0;
            return 0;
        }
    }

    cout << 1;

    return 0;
}