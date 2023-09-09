#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> A, pair<int, int> B){
    return A.first > B.first;
}

bool cmp2(pair<int, int> A, pair<int, int> B){
    return A.second > B.second;
}

int main(){
    int N, D, C;
    vector<pair<int, int>> dccon1;
    vector<pair<int, int>> dccon2;
    vector<pair<int, int>> ans;
    
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> D >> C;
        dccon1.push_back({D, C});
    }
    //D와 C는 낮을수록 좋다.
    
    sort(dccon1.begin(), dccon1.end(), cmp1);

    for(int i = 0; i < N; ++i){
        bool trigger = false;
        for(int j = i+1; j < N; ++j){
            if(dccon1[i].second >= dccon1[j].second){
                trigger = true;
                break;
            }
        }
        if(!trigger) dccon2.push_back(dccon1[i]);
    }

    sort(dccon2.begin(), dccon2.end(), cmp2);

    for(int i = 0; i < dccon2.size(); ++i){
        bool trigger = false;
        for(int j = i+1; j < dccon2.size(); ++j){
            if(dccon2[i].first >= dccon2[j].first){
                trigger = true;
                break;
            }
        }
        if(!trigger) ans.push_back(dccon2[i]);
    }

    cout << ans.size();

    return 0;
}
