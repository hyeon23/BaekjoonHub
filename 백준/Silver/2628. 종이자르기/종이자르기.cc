#include<bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, N, type, cut;
    cin >> Y >> X;
    cin >> N;

    vector<int> vx;
    vector<int> vy;

    vx.push_back(0);
    vy.push_back(0);

    for(int i = 0; i < N; ++i){
        cin >> type >> cut;

        if(type == 0){
            vx.push_back(cut);
        }
        else if(type == 1){
            vy.push_back(cut);
        }
    }

    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());

    vx.push_back(X);
    vy.push_back(Y);

    vector<int> xsz;
    vector<int> ysz;

    for(int i = 1; i < vx.size(); ++i){
        xsz.push_back(vx[i] - vx[i-1]);
    }

    for(int i = 1; i < vy.size(); ++i){
        ysz.push_back(vy[i] - vy[i-1]);
    }

    int m = 0;

    for(int i = 0; i < xsz.size(); ++i){
        for(int j = 0; j < ysz.size(); ++j){
            m = max(m, xsz[i] * ysz[j]);
        }
    }

    cout << m;
    return 0;
}