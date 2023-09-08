#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string> A, pair<int, string> B){
    return A.first < B.first;
}

int main(){
    int redscore = 0;
    int bluescore = 0;

    string endtime, team;
    vector<int> scores = {10, 8, 6, 5, 4, 3, 2, 1, 0};
    vector<pair<int, string>> vec;

    for(int i = 0; i < 8; ++i){
        cin >> endtime >> team;
        int min = stoi(endtime.substr(0, 1)) * 60 * 1000;
        int sec = stoi(endtime.substr(2, 2)) * 1000;
        int mm = stoi(endtime.substr(5, 3));
        vec.push_back({min + sec + mm, team});
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < 8; ++i){
        if(vec[i].second == "B"){
            bluescore += scores[i];
        }
        else if(vec[i].second == "R"){
            redscore += scores[i];
        }
    }

    if(redscore > bluescore) cout << "Red";
    else cout << "Blue";

    return 0;
}