
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2) { 
    return p1.second < p2.second;
}

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> vec(N);

    for(int i = 0; i < N; ++i){
        int x, y;
        cin >> x >> y;

        vec[i] = {x, y};
    }

    sort(vec.begin(), vec.end());
    int cx = vec[(N-1)/2].first;
    sort(vec.begin(), vec.end(), cmp);
    int cy = vec[(N-1)/2].second;

    long long ans = 0;

    for(int i = 0; i < N; ++i){
        ans += abs(cx - vec[i].first) + abs(cy - vec[i].second);
    }

    cout << ans;

    return 0;
}