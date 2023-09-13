#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0) cout << 0;
    else{
        vector<int> vec(n);
        for(int i = 0; i < n; ++i){
            cin >> vec[i];
        }
        int off = round((float)n * 0.15);
        int sum = 0;
        sort(vec.begin(), vec.end());
        for(int i = off; i < vec.size() - off; ++i){
            sum += vec[i];
        }
    
        cout << round(sum / (float)(n - 2*off));
    }

    return 0;
}