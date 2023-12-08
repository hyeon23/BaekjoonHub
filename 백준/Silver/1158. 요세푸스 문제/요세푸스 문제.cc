#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    queue<int> q;
    for(int i = 1; i <= N; ++i){
        q.push(i);
    }
    long long cnt = 0;
    cout << '<';
    while(!q.empty()){
        for(int i = 0; i < K - 1; ++i){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if(q.size()) cout << ", ";
    }
   cout << '>'; 
}