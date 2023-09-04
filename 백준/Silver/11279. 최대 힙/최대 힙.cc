#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, tmp;
    cin >> N;
    priority_queue<int> pq;
    while(N--){
        cin >> tmp;
        if(tmp == 0){
            if(pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else pq.push(tmp);
    }
    return 0;
}