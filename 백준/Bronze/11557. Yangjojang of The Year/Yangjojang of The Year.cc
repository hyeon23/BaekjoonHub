#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    return A.second > B.second;
}

int main(){
    int T, N, L;
    string S;
    cin >> T;
    vector<pair<string, int>> top;
    while(T--){
        cin >> N;
        while(N--){
            cin >> S >> L;
            top.push_back({S, L});
        }
        sort(top.begin(), top.end(), cmp);
        cout << top[0].first << '\n';
    }
    return 0;
}