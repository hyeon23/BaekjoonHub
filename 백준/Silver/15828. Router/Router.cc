#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, tmp;
    cin >> N;
    queue<int> q;
    while(cin >> tmp){
        if(tmp == -1) break;
        else if(tmp == 0) {
            q.pop();
        }
        else {
            if(q.size() == N){
                q.push(tmp);
                q.pop();
            }
            else{
                q.push(tmp);
            }
        }
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