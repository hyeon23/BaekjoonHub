#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    
    map<int, bool> m;

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
        m[vec[i]] = true;
    }

    sort(vec.begin(), vec.end());

    int ans = 1000000001;

    for(int i = 0; i < vec.size(); ++i){
        int start = vec[i];
        int tmp = 0;

        for(int j = 0; j < 5; ++j){
            if(m[start+j] == false){
                tmp++;
            }
        }

        ans = min(ans, tmp);
    }
    cout << ans;

    return 0;
}