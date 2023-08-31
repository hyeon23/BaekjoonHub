#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string car;
    deque<string> q;
    for(int i = 0; i < N; ++i){//대근
        cin >> car;
        q.push_back(car);
    }
    int cnt = 0;
    for(int i = 0; i < N; ++i){//영식
        cin >> car;

        if(q.front() != car){
            ++cnt;
            q.erase(find(q.begin(), q.end(), car));
        }
        else{
            q.pop_front();
        }
    }

    cout << cnt;
}