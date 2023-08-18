#include <bits/stdc++.h>
using namespace std;

int main(){
    //|1|2|3|4|5
    int N;
    queue<int> q;
    cin >> N;
    for(int i = 1; i <= N; ++i){
        q.push(i);//4 3 2 1
    }
    while(!q.empty()){
        cout << q.front() << ' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }
}