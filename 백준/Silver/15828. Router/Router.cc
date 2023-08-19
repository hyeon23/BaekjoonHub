#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, tmp;
    cin >> N;
    queue<int> q;
    while(cin >> tmp){
        if(tmp == -1) break;
        else if(tmp == 0) q.pop();
        else q.push(tmp);
    }

    if(q.empty()) cout << "empty";
    else {
        while(!q.empty()){
            cout << q.front() << ' ';
            q.pop();
        }
    }
    return 0;
}