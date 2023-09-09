#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.first > B.first;
}

bool cmp2(pair<int, int> A, pair<int, int> B){
    return A.second > B.second;
}

int main(){
    //상위 K개
    //쉬운 버전 해결: 100점
    //어려운 버전 해결: 140점

    int N, L, K, easy, hard, cnt = 0, ans = 0;
    cin >> N >> L >> K;

    vector<pair<int, int>> probs1;
    vector<pair<int, int>> probs2;

    for(int i = 0; i < N; ++i){
        cin >> easy >> hard;
        probs1.push_back({hard, easy});
    }

    sort(probs1.begin(), probs1.end(), cmp);

    for(int i = 0; i < probs1.size(); ++i){
        if(L >= probs1[i].first){
            ans += 140;
            cnt++;
            if(cnt >= K) break;
        }
        else{
            probs2.push_back(probs1[i]);
        }
    }

    sort(probs2.begin(), probs2.end(), cmp2);

    for(int i = 0; i < probs2.size(); ++i){
        if(L >= probs1[i].second){
            ans += 100;
            cnt++;
            if(cnt >= K) break;
        }
    }
    
    cout << ans;

    return 0;
}