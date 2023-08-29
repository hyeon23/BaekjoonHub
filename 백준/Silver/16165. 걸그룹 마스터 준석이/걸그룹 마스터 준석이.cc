#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, groupnum;
    string teamname, name;
    cin >> N >> M;
    map<string, string> maps;

    while(N--){
        cin >> teamname >> groupnum;
        for(int i = 0; i < groupnum; ++i){
            cin >> name;
            maps[name] = teamname;
        }
    }

    while(M--){
        string na; int tp;
        cin >> na >> tp;
        
        if(tp == 0){
            for(auto i : maps){
                if(i.second == na)
                    cout << i.first << '\n';
            }
        }
        else if(tp == 1){
            cout << maps[na] << '\n';
        }
    }
}