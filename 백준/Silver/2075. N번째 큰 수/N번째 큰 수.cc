#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, tmp;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < N * N; ++i){
        cin >> tmp;
        pq.push(tmp);
        if(pq.size() > N) pq.pop();
    }
    cout << pq.top();
    return 0;
}