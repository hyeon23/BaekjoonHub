#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> vec(N);
    vector<int> diff(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for(int i = 1; i < N; ++i){
        diff[i] = vec[i] - vec[i-1];
    }

    int ans = 0;

    //1 3 / 5 6 / 10

    //diff: 0 2 2 1 4

    sort(diff.begin(), diff.end());

    for(int i = 0; i < N-K+1; ++i){
        ans += diff[i];
    }

    cout << ans;

    return 0;
}