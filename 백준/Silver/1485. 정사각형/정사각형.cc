#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        vector<pair<int, int>> ds(4);
        cin >> ds[0].first >> ds[0].second;
        cin >> ds[1].first >> ds[1].second;
        cin >> ds[2].first >> ds[2].second;
        cin >> ds[3].first >> ds[3].second;

        //네 변의 길이가 같다 / 네 변의 길이가 0이 아님
        vector<int> vec;

        int l1 = powl(ds[1].first - ds[0].first, 2) + powl(ds[1].second - ds[0].second, 2);
        int l2 = powl(ds[2].first - ds[1].first, 2) + powl(ds[2].second - ds[1].second, 2);
        int l3 = powl(ds[3].first - ds[2].first, 2) + powl(ds[3].second - ds[2].second, 2);
        int l4 = powl(ds[0].first - ds[3].first, 2) + powl(ds[0].second - ds[3].second, 2);
        int l5 = powl(ds[2].first - ds[0].first, 2) + powl(ds[2].second - ds[0].second, 2);
        int l6 = powl(ds[3].first - ds[1].first, 2) + powl(ds[3].second - ds[1].second, 2);

        vec.push_back(l1);
        vec.push_back(l2);
        vec.push_back(l3);
        vec.push_back(l4);
        vec.push_back(l5);
        vec.push_back(l6);

        sort(vec.begin(), vec.end());

        if(vec[0] == 0) cout << 0 << '\n';
        else{
            if(vec[0] == vec[1] && vec[0] == vec[2] && vec[0] == vec[3]){
                if(vec[4] == vec[5]) cout << 1 << '\n';
                else cout << 0 << '\n';
            }
            else cout << 0 << '\n';
        }
    }
    return 0;
}