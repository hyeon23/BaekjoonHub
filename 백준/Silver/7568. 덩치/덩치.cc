#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return (A.first > B.first) && (A.second > B.second);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<pair<int, int>> pvec;

    int N, key, mom;

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> key >> mom;
        pvec.push_back({key, mom});
    }

    for(int i = 0; i < N; ++i){
        int k = 0;
        for(int j = 0; j < N; ++j){
            if(pvec[i].first < pvec[j].first && pvec[i].second < pvec[j].second){
                ++k;
            }
        }
        cout << k + 1 << ' ';
    }

    return 0;
}