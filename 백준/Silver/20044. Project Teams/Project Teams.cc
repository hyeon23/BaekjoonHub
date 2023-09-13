#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> members(2*n);
    for(int i = 0; i < 2 * n; ++i){
        cin >> members[i];
    }

    sort(members.begin(), members.end());

    //1 2 3 5 7 9
    //편차없이 나눠라 = min값이 최대가 된다.

    vector<int> scores;

    for(int i = 0; i < members.size() / 2; ++i){
        scores.push_back(members[i] + members[members.size() - i - 1]);
    }

    sort(scores.begin(), scores.end());

    cout << scores[0];

    return 0;
}