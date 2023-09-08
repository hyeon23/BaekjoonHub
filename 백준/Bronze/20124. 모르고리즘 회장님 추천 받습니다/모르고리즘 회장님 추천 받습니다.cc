#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(pair<string, int> A, pair<string, int> B){
        if(A.second == B.second){
            return A.first < B.first;
        }
        return A.second > B.second;
    }
};

int main(){
    vector<pair<string, int>> vec;
    int T;
    cin >> T;
    while(T--){
        string name;
        int score;
        cin >> name >> score;
        vec.push_back({name, score});
    }
    sort(vec.begin(), vec.end(), cmp());
    cout << vec[0].first;
    return 0;
}