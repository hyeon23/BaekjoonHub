#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<>> pq;
    int a, b, c;
    cin >> a >> b >> c;
    pq.push(a); pq.push(b); pq.push(c);

    while(!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }

}