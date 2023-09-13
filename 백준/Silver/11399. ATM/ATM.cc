#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int offset = 0;
    int ans = 0;

    for(int i = 0; i < vec.size(); ++i){
        offset += vec[i];
        ans += offset;
    }

    cout << ans;
    return 0;
}