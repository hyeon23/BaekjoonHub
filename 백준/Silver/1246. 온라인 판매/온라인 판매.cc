#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.first > p2.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> vec(M);
    vector<int> cnt(N);

    for(int i = 0; i < M; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int ans = 0;

    vector<pair<long long, int>> prices;

    for(int i = 0; i < vec.size(); ++i){
        int p = vec[i];
        int cnt = 0;
        for(int j = 0; j < vec.size(); ++j){
            if(vec[j] >= p){
                cnt++;

                if(cnt == N) break;
            }
        }
        prices.push_back({cnt * p, p});
    }

    sort(prices.begin(), prices.end(), cmp);

    cout << prices[0].second << ' ' << prices[0].first;

    return 0;
}