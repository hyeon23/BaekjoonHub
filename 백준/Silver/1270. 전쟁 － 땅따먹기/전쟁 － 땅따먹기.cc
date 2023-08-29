#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map<long long, long long> cnt;
    long long n, arnum, snum;
    cin >> n;
    while(n--){
        cnt.clear();
        cin >> arnum;
        for(long long i = 0; i < arnum; ++i){
            cin >> snum;
            cnt[snum]++;
        }
        bool t = false;
        for(auto i : cnt){
            if(i.second > arnum / 2){
                cout << i.first << '\n';
                t = true;
                break;
            }
        }
        if(!t) cout << "SYJKGW" << '\n';
    }
}