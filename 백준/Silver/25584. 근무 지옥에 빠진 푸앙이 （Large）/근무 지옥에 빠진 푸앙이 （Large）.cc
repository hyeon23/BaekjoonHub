#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    return A.second < B.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    string str;
    map<string, int> gunmu;
    cin >> N;
    while(N--){
        for(int i = 0; i < 4; ++i){
            for(int j = 0; j < 7; ++j){
                cin >> str;
                if(str != "-"){
                    if(i == 0) gunmu[str] += 4;
                    else if(i == 1) gunmu[str] += 6;
                    else if(i == 2) gunmu[str] += 4;
                    else if(i == 3) gunmu[str] += 10;
                }
            }
        }
    }

    if(gunmu.empty()){
        cout << "Yes";
    }
    else{
        vector<pair<string, int>> vec(gunmu.begin(), gunmu.end());
        sort(vec.begin(), vec.end(), cmp);

        if(vec[vec.size() - 1].second - vec[0].second <= 12) cout << "Yes";
        else cout << "No";
    }

    
    return 0;
}
