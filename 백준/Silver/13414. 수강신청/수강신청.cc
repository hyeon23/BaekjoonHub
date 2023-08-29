#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    return A.second < B.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int K, L;
    string str;
    map<string, int> list;
    cin >> K >> L;

    for(int i = 0; i < L; ++i){
        cin >> str;
        list[str] = i;
    }

    vector<pair<string, int>> vec(list.begin(), list.end());

    sort(vec.begin(), vec.end(), cmp);

    if(vec.size() < K){
        for(int i = 0; i < vec.size(); ++i)
            cout << vec[i].first << '\n';
    }
    else{
        for(int i = 0; i < K; ++i)
            cout << vec[i].first << '\n';
    }
    return 0;
}