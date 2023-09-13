#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> c1, pair<int, int> c2){
    return c1.first < c2.first;
}

int main(){
    int N, at, gt;
    cin >> N;

    vector<pair<int, int>> cows(N);
    for(int i = 0; i < N; ++i){
        cin >> at >> gt;
        cows.push_back({at, gt});
    }
    sort(cows.begin(), cows.end(), cmp);

    int ans = 0;

    for(int i = 0; i < cows.size(); ++i){
        if(ans < cows[i].first){
            ans = cows[i].first;
        }
        ans += cows[i].second;
    }
    cout << ans;

    return 0;
}