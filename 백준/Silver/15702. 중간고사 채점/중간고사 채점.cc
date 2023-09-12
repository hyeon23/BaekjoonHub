#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second > B.second;
}

int main(){
    int N, M, num;
    string ox;
    cin >> N >> M;
    vector<int> moon(N);
    for(int i = 0; i < N; ++i){
        cin >> moon[i];
    }

    vector<pair<int, int>> pvec;//응시자 번호 & 합

    for(int i = 0; i < M; ++i){
        cin >> num;
        pvec.push_back({num, 0});
        for(int j = 0; j < N; ++j){
            cin >> ox;
            if(ox == "O"){
                pvec[i].second += moon[j];
            }
        }
    }

    sort(pvec.begin(), pvec.end(), cmp);

    cout << pvec[0].first << ' ' << pvec[0].second;

    return 0;
}