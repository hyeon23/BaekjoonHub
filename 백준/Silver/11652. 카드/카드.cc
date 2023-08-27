#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, max_val = 0;
    
    long long tmp;
    map<long long, int> m;

    cin >> N;

    while(N--){
        cin >> tmp;
        m[tmp]++;
    }
    for(auto i : m) max_val = max(max_val, i.second);
    for(auto i : m) {
        if(i.second == max_val) {
            cout << i.first;
            return 0;
        }
    }
}