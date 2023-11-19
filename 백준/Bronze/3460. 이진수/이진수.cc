#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> ans;
        while(n != 0){
            ans.push_back(n % 2);
            n /= 2;
        }
        
        for(int i = 0; i < ans.size(); ++i){
            if(ans[i] == 1) cout << i << ' ';
        }
    }

    return 0;
}