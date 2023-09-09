#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, M;
    cin >> T;
    
    while(T--){
        cin >> N >> M;
        vector<int> jvec(N);
        vector<int> bvec(M);

        for(int i = 0; i < N; ++i) cin >> jvec[i];
        for(int i = 0; i < M; ++i) cin >> bvec[i];

        sort(jvec.begin(), jvec.end());
        sort(bvec.begin(), bvec.end());
        
        while(!jvec.empty() && !bvec.empty()){
            if(jvec[0] >= bvec[0]) bvec.erase(bvec.begin(), bvec.begin() + 1);
            else jvec.erase(jvec.begin(), jvec.begin() + 1);
        }

        if(jvec.empty()) cout << "B" << '\n';
        else cout << "S" << '\n';
    }
    
    
    return 0;
}