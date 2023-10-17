#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, C;
    cin >> N >> C;

    vector<int> pri(N);

    for(int i = 0; i < N; ++i){
        cin >> pri[i];
    }

    int ans = 0;

    for(int i = 1; i <= C; ++i){
        for(int j = 0; j < N; ++j){
            if(i % pri[j] == 0){
                ans++;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}