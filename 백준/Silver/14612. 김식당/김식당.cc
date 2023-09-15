#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M, n, t, ord;
    cin >> N >> M;
    string cmd;

    vector<pair<int, int>> pvec;
    while(N--){
        cin >> cmd;
        if(cmd == "order"){
            cin >> n >> t;
            pvec.push_back({t, n});
        }
        else if(cmd == "sort"){
            sort(pvec.begin(), pvec.end());
        }
        else if(cmd == "complete"){
            cin >> ord;
            for(auto it = pvec.begin(); it != pvec.end(); ++it){
                if(it->second == ord){
                    pvec.erase(it);
                    break;
                }
            }
        }

        if(pvec.size() == 0){
            cout << "sleep" << '\n';
        }
        else{
            for(vector<pair<int, int> >::iterator iter=pvec.begin() ; iter!=pvec.end() ; iter++){
            cout << iter->second << " " ;
        }
            cout << '\n';
        }
    }
    return 0;
}