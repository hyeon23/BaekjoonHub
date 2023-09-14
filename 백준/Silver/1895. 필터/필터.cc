#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, C, V, T;
    cin >> R >> C;

    vector<vector<int>> vvec(R, vector<int>(C));

    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            cin >> vvec[i][j];
        }
    }

    cin >> T;

    int ans = 0;

    for(int i = 0; i < R-3+1; ++i){
        for(int j = 0; j < C-3+1; ++j){
            vector<int> vec;
            for(int k = 0; k < 3; ++k){
                for(int l = 0; l < 3; ++l){
                    vec.push_back(vvec[i+k][j+l]);
                }
            }
            sort(vec.begin(), vec.end());
            if(T <= vec[4]) ans++;
        }
    }
    cout << ans;

    return 0;
}