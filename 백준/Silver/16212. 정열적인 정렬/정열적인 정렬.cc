#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, tmp;
    cin >> N;
    vector<long long> vec(N);
    
    for(int i = 0; i < N; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    for(auto i : vec)
        cout << i << ' ';
    return 0;
}