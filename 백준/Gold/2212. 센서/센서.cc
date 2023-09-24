#include <bits/stdc++.h>
using namespace std;

int main(){
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

    sort(diff.begin(), diff.end());

    int ans = 0;

    for(int i = 0; i < N - K + 1; ++i){
        ans += diff[i];
    }

    cout << ans;

    return 0;
}