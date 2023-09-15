#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2){
    if(p1.second.first == p2.second.first){
        if(p1.second.second == p2.second.second){
            return p1.first < p2.first;
        }
        return p1.second.second < p2.second.second;
    }
    return p1.second.first > p2.second.first;
}

int main(){
    int n, m, q, tt, tn, pn;
    string res;
    map<pair<int, int>, stack<pair<int, string>>> mm;
    map<int, pair<int, int>> mmm;//팀, 문제 수 / 총 시간
    cin >> n >> m >> q;

    for(int i = 0; i < q; ++i){
        cin >> tt >> tn >> pn >> res;

        if(mm[{tn, pn}].empty())
            mm[{tn, pn}].push({tt, res});
        else{
            if(mm[{tn, pn}].top().second != "AC"){
                mm[{tn, pn}].push({tt, res});
            }
        }
    }

    for(auto i : mm){
        if(!i.second.empty()){
            if(i.second.top().second == "AC"){
                mmm[i.first.first].first++;
                
                int ttt = i.second.top().first + (i.second.size() - 1) * 20;

                mmm[i.first.first].second += ttt;
            }
        }
    }

    //map<int, pair<int, int>> mmm;//팀, 문제 수 / 총 시간

    for(int i = 1; i <= n; ++i){
        if(mmm.find(i) == mmm.end()){
            mmm[i] = {0, 0};
        }
    }

    vector<pair<int, pair<int, int>>> ppvec(mmm.begin(), mmm.end());

    

    sort(ppvec.begin(), ppvec.end(), cmp);

    for(int i = 0; i < ppvec.size(); ++i){
        cout << ppvec[i].first << ' ' << ppvec[i].second.first << ' ' << ppvec[i].second.second << '\n';
    }
}