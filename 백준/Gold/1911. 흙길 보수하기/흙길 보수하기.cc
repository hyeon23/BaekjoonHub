#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first < p2.first;
}

int main(){
    int N, L, s, e;
    cin >> N >> L;

    vector<pair<int, int>> pvec;

    for(int i = 0; i < N; ++i){
        cin >> s >> e;
        pvec.push_back({s, e});
    }
    sort(pvec.begin(), pvec.end(), cmp);
    pair<int, int> prev = {0, 0};
    int ans = 0;

    for(int i = 0; i < N; ++i){
        pair<int, int> cur = pvec[i];

        if(prev.second < cur.first){
            prev.first = cur.first;
        }
        else{
            cur.first = prev.second;
        }
        int cnt = ceil((cur.second - cur.first) / (float)L);
        ans += cnt;
        prev.second = cur.first + L * cnt;
        if(prev.second == pvec[pvec.size()-1].second) break;
    }
    cout << ans;

    return 0;
}