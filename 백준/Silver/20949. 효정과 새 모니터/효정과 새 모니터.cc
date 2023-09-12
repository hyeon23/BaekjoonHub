#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    if(A.second == B.second)
        return A.first < B.first;
    return A.second > B.second;
}

int main(){
    int N, W, H;
    cin >> N;
    vector<pair<int, int>> vec;
    for(int i = 0; i < N; ++i){
        cin >> W >> H;

        vec.push_back({i+1, W * W + H * H});
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < N; ++i){
        cout << vec[i].first << '\n';
    }
}