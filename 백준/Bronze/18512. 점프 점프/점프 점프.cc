#include <bits/stdc++.h>
using namespace std;

int main(){
    int P1, P2, X, Y;
    cin >> X >> Y >> P1 >> P2;

    vector<int> dists;

    for(int i = 0; i < 101; ++i){
        for(int j = 0; j < 101; ++j){
            if(P1 + i * X == P2 + j * Y) dists.push_back(P2 + j * Y);
        }
    }

    sort(dists.begin(), dists.end());

    if(dists.size() == 0) cout << -1;
    else cout << dists[0];

    return 0;
}