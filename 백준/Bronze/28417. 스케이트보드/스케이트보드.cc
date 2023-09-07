#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, ans = 0;
    cin >> T;
    
    while(T--){
        vector<int> vec1(2);
        vector<int> vec2(5);
        for(int i = 0; i < 2; ++i) cin >> vec1[i];
        for(int i = 0; i < 5; ++i) cin >> vec2[i];

        sort(vec1.begin(), vec1.end(), greater<int>());
        sort(vec2.begin(), vec2.end(), greater<int>());

        ans = max(ans, vec1[0] + vec2[0] + vec2[1]);
    }
    cout << ans;
    return 0;
}