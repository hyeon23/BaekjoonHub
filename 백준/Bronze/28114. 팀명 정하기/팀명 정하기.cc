#include <bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator()(pair<int, string> A, pair<int, string> B){
        return A.first > B.first;
    }
};

int main(){
    vector<pair<int, string>> score(3);
    vector<int> year(3);

    for(int i = 0; i < 3; ++i){
        int x;
        string z;
        cin >> x >> year[i] >> z;
        year[i] %= 100;
        score[i] = {x, z};
    }

    sort(year.begin(), year.end());
    sort(score.begin(), score.end(), cmp());

    for(int i = 0; i < year.size(); ++i)
        cout << year[i];
    cout << '\n';
    for(int i = 0; i < score.size(); ++i)
        cout << score[i].second[0];
}