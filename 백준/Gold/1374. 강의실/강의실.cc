#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first < p2.first;
}

int main(){
    int N, n, s, e;
    //최소 강의실 수
    cin >> N;
    vector<pair<int, int>> pvec;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < N; ++i){
        cin >> n >> s >> e;
        pvec.push_back({s, e});
    }

    sort(pvec.begin(), pvec.end(), cmp);

    for(int i = 0; i < N; ++i){
        if(pq.empty()){
            pq.push(pvec[i].second);
        }
        else{
            if(pq.top() <= pvec[i].first){
                pq.pop();
            }
            pq.push(pvec[i].second);
        }
    }
    cout << pq.size();
    return 0;
}