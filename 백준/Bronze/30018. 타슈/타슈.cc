#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ans = 0;

    cin >> N;

    vector<int> curBike(N, 0);
    vector<int> postBike(N, 0);

    for(int i = 0; i < N; ++i) cin >> curBike[i];
    for(int i = 0; i < N; ++i) cin >> postBike[i];

    for(int i = 0; i < N; ++i){
        if(postBike[i] < curBike[i]) ans += (curBike[i] - postBike[i]);
    }

    cout << ans;

    return 0;
}