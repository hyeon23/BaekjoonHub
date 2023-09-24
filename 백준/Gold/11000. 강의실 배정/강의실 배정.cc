#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}

struct cmp2{
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        return p1.second > p2.second;
    }
};

int main(){
    int N, S, T;
    cin >> N;
    vector<pair<int, int>> pvec(N);
    for(int i = 0; i < N; ++i){
        cin >> S >> T;
        pvec[i] = {S, T};
    }

    sort(pvec.begin(), pvec.end(), cmp1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp2> pq;

    for(int i = 0; i < pvec.size(); ++i){
        if(pq.empty()){
            pq.push(pvec[i]);
        }
        else{
            if(pq.top().second <= pvec[i].first){
                //갱신
                pair<int, int> t = pq.top();
                pq.pop();
                pq.push({t.first, pvec[i].second});
            }
            else{
                //추가
                pq.push({pvec[i].first, pvec[i].second});
            }
        }
    }
    cout << pq.size();
    return 0;
}