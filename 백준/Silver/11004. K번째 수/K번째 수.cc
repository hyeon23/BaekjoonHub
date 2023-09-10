#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << vec[K-1];
    return 0;
}