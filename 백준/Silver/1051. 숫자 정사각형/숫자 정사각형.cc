#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> vvec(N, vector<int>(M));
    for(int i = 0; i < N; ++i){
        string str;
        cin >> str;

        for(int j = 0; j < str.size(); ++j){
            vvec[i][j] = str[j] - '0';
        }
    }

    for(int i = min(N, M)-1; i >= 0; --i){//5, 4, 3, 2, 1
        for(int j = 0; j < N; ++j){
            for(int k = 0; k < M; ++k){

                if(j + i >= N) continue;
                if(k + i >= M) continue;

                int original = vvec[j][k];

                if(vvec[j][k] == vvec[j+i][k] && vvec[j][k] == vvec[j][k+i] && vvec[j][k] == vvec[j+i][k+i]) { 
                    cout << pow(i+1, 2);
                    return 0;
                }
            }
        }
    }

    return 0;
}