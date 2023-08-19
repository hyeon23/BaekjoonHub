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
        ++cnt;
        if(cnt % K == 0){
            if(q.size() == 1) cout << q.front();
            else cout << q.front() << ", ";
            q.pop();

        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
   cout << '>'; 
}