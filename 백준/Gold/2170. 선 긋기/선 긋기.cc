#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N, start, end;
    cin >> N;

    vector<pair<long long, long long>> dots;

    for(long long i = 0; i < N; ++i){
        cin >> start >> end;
        dots.push_back({start, end});
    }

    sort(dots.begin(), dots.end(), cmp);

    pair<long long, long long> cur = dots[0];

    long long ans = 0;

    for(long long i = 1; i < dots.size(); ++i){
        if(cur.second >= dots[i].first){
            if(cur.second <= dots[i].second){
                cur.second = dots[i].second;
            }
        }
        else{
            ans += cur.second - cur.first;
            cur = dots[i];
        }
        if(i == dots.size()-1) ans += cur.second - cur.first;
    }

    if(N == 1) ans += cur.second - cur.first;

    cout << ans;

    return 0;
}