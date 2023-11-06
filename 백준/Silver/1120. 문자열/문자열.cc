#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    int mincnt = INT_MAX;

    for(int i = 0; i < B.size() - A.size() + 1; ++i){
        int cnt = 0;

        for(int j = 0; j < A.size(); ++j){
            if(B[i + j] != A[j]) ++cnt;
        }
        mincnt = min(mincnt, cnt);
    }

    cout << mincnt;

    return 0;
}