#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, MIN = INT_MAX;
    cin >> n;

    vector<int> dist(n);

    for(int i = 0; i < n; ++i){
        cin >> dist[i];
    }

    m = accumulate(dist.begin(), dist.end(), 0);

    for(int i = 0; i < n; ++i){
        int sum = 0;
        MIN = min(MIN, m - dist[i]);
    }

    cout << MIN;

    return 0;
}