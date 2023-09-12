#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second > B.second;
}

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> vvec(N, vector<int>(M, 0));

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cin >> vvec[i][j];
        }
    }

   for(int i = 0; i < N; ++i){
        sort(vvec[i].begin(), vvec[i].end(), greater<>());
   }

   vector<int> ans(N, 0);

   for(int i = 0; i < M; ++i){
        int m = 0;
        for(int j = 0; j < N; ++j){
            m = max(m, vvec[j][i]);
        }

        for(int j = 0; j < N; ++j){
            if(m == vvec[j][i]){
                ans[j]++; 
            }
        }
    }

    vector<pair<int, int>> pvec;

    for(int i = 0; i < ans.size(); ++i){
        pvec.push_back({i+1, ans[i]});
    }

    sort(pvec.begin(), pvec.end(), cmp);

    

    for(int i = 0; i < pvec.size(); ++i){
        if(pvec[0].second == pvec[i].second)
            cout << pvec[i].first << ' ';
        else{
            break;
        }
    }

    return 0;
}