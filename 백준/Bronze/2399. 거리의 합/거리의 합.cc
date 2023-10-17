#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dists(n);
    for(int i = 0; i < n; ++i){
        cin >> dists[i];
    }

    long long sum = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            sum += abs(dists[i] - dists[j]);
        }    
    }

    cout << sum;

    return 0;
}