#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        vector<int> score(5);
        for(int i = 0; i < 5; ++i) cin >> score[i];
        sort(score.begin(), score.end());
        if(abs(score[1] - score[3]) >= 4) cout << "KIN" << '\n';
        else cout << accumulate(score.begin()+1, score.begin()+4, 0) << '\n';
    }
    return 0;
}