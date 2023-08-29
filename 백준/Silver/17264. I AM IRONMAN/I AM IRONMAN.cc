#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, P;
    cin >> N >> P;
    int W, L, G;
    cin >> W >> L >> G;
    int curgrade = 0;
    map<string, string> WLlist;
    string name, wl;
    bool t = false;
    for(int i = 0; i < P; ++i){
        cin >> name >> wl;
        WLlist[name] = wl;
    }
    for(int i = 0; i < N; ++i){
        cin >> name;
        if(WLlist[name] == "W"){
            curgrade += W;
            if(curgrade >= G){
                t = true;
                break;
            }
        }
        else{
            curgrade = (curgrade <= L) ? 0 : curgrade - L;
        }
    }
    if(t) cout << "I AM NOT IRONMAN!!";
    else cout << "I AM IRONMAN!!";
}