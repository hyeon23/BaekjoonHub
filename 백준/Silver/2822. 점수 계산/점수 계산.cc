#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> A, pair<int, int> B){
    return A.first < B.first;
}

int main(){
    int tmp;
    vector<pair<int, int>> vec(8);
    for(int i = 0; i < 8; ++i){
        cin >> tmp;
        vec[i] = {tmp, i+1};
    }

    sort(vec.begin(), vec.end(), cmp);

    int sum = 0;

    vector<int> v;

    for(int i = 3; i < 8; ++i){
        sum += vec[i].first;
        v.push_back(vec[i].second);    
    }

    cout << sum << '\n';

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ';
    }
}