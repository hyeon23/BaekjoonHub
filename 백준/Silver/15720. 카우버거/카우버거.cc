#include <bits/stdc++.h>
using namespace std;

int main(){
    int B, C, D;
    cin >> B >> C >> D;

    vector<int> Bvec(B);
    vector<int> Cvec(C);
    vector<int> Dvec(D);

    int pre = 0;

    for(int i = 0; i < B; ++i){
        cin >> Bvec[i];
        pre += Bvec[i];
    }
        

    for(int i = 0; i < C; ++i){
        cin >> Cvec[i];
        pre += Cvec[i];
    }
        

    for(int i = 0; i < D; ++i){
        cin >> Dvec[i];
        pre += Dvec[i];
    }

    cout << pre << '\n';

    int post = 0;

    sort(Bvec.begin(), Bvec.end(), greater<>());
    sort(Cvec.begin(), Cvec.end(), greater<>());
    sort(Dvec.begin(), Dvec.end(), greater<>());

    while(Bvec.size() >= 1 && Cvec.size() >= 1 && Dvec.size() >= 1){
        post += (Bvec[0] + Cvec[0] + Dvec[0]) * 9 / 10;
        Bvec.erase(Bvec.begin());
        Cvec.erase(Cvec.begin());
        Dvec.erase(Dvec.begin());
    }

    for(int i = 0; i < Bvec.size(); ++i){
        post += Bvec[i];
    }

    for(int i = 0; i < Cvec.size(); ++i){
        post += Cvec[i];
    }

    for(int i = 0; i < Dvec.size(); ++i){
        post += Dvec[i];
    }

    cout << post;

    return 0;
}