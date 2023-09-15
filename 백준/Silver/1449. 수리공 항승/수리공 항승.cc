#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L, tmp;
    cin >> N >> L;

    vector<int> tpos(1001, 0);

    for(int i=0; i < N; ++i){
        cin >> tmp;
        tpos[tmp]++;
    }
    
    int ans = 0;

    for(int i = 0; i < 1001; ++i){
        if(tpos[i] == 1){
            ans++;
            i += L-1;
        }
    }
    cout << ans;
    return 0;
}