#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int N, s, m;
        cin >> N;
        vector<pair<int, int>> pvec(N);
        
        for(int i = 0; i < N; ++i){
            cin >> s >> m;
            pvec[i] = {s, m};
        }

        sort(pvec.begin(), pvec.end());

        int result = 1;
        int temp = 0;
        for(int i = 1; i < N; ++i){
            if(pvec[temp].second > pvec[i].second){
                ++result;
                temp = i;
            }
        }
        cout << result << '\n';
    }
    return 0;
}