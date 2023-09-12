#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, string> A, pair<string, string> B){
    if(A.first == B.first)
        return A.second > B.second;
    return A.first < B.first;
}

int main(){
    int N;
    string A, B;
    cin >> N;
    vector<pair<string, string>> vec;
    for(int i = 0; i < N; ++i){
        cin >> A >> B;
        vec.push_back({A, B});
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i].first << ' ' << vec[i].second << '\n';
    }
}