#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> A, pair<int, pair<int, int>> B){
    if(A.second.first == B.second.first)
        return A.second.second < B.second.second;
    return A.second.first > B.second.first;
}

int main(){
    int N, C, tmp;
    map<int, pair<int, int>> m;
    cin >> N >> C;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        m[tmp].first++;
        if(i == 0)
            m[tmp].second = i + 1;
        else{
            if(m[tmp].second != 0)
                m[tmp].second = min(i + 1, m[tmp].second);
            else
                m[tmp].second = i + 1;
        }
    }
    vector<pair<int, pair<int, int>>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);
    for(auto i : vec){
        for(int j = 0; j < m[i.first].first; ++j){
            cout << i.first << ' ';
        }
    }
}