#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second > B.second;
}

int main(){
    map<string, int> m;
    int N;
    cin >> N;
    string s;
    while(N--){
        cin >> s;
        m[s]++;
    }

    vector<pair<string, int>> vec(m.begin(), m.end());

    sort(vec.begin(), vec.end(), cmp);

    cout << vec[0].first;
}