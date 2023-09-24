#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
        if(p1.second == p2.second){
            return p1.first < p2.first;
        }
    return p1.second < p2.second;
}

int main(){
    int n, m, d;
    string s, e;
    cin >> n;
    for(int k = 1; k <= n; ++k){
        cin >> m;
        map<int, vector<pair<int, int>>> mvec;
        for(int i = 0; i < m; ++i){
            cin >> d >> s >> e;

            int start = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(2, 2));
            int end = stoi(e.substr(0, 2)) * 60 + stoi(e.substr(2, 2));

            mvec[d].push_back({start, end});
        }

        int sum = 0;

        for(auto it = mvec.begin(); it != mvec.end(); ++it){

            int cnt = 1;

            vector<pair<int, int>>& cvec = it->second;

            sort(cvec.begin(), cvec.end(), cmp);

            pair<int, int> cur = cvec[0];

            for(int i = 1; i < cvec.size(); ++i){
                if(cur.second <= cvec[i].first) { 
                    ++cnt;
                    cur = cvec[i];
                }
            }
            sum += cnt;
        }
        
        cout << "Scenario #" << k << ':' << '\n';
        cout << sum << '\n';
        cout << '\n';
    }

    /*
1 1200 1320
1 1220 1340

2 1155 1220
2 1250 1310
2 1220 1340
2 1330 1550

3 1030 1130
3 1220 1240
3 1130 1300
3 1240 1330
    */
    return 0;
}