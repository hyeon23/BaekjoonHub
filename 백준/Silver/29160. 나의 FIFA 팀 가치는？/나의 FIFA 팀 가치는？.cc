#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, p, w;
    cin >> N >> K;

    map<int, priority_queue<int>> mpq;//포지션별 선수 가치;

    for(int i = 1 ; i <= N; ++i){
        cin >> p >> w;//포지션, 선수가치
        mpq[p].push(w);
    }

    while(K--){
        for(int i = 1; i <= 11; ++i){
            if(mpq.find(i) != mpq.end()){
                mpq[i].push(mpq[i].top() > 0 ? mpq[i].top() - 1 : 0);
                mpq[i].pop();
            }
        }
    }

    int sum = 0;

    for(int i = 1; i <= 11; ++i)
        if(mpq.find(i) != mpq.end())
            sum += mpq[i].top();

    cout << sum;

    return 0;
}