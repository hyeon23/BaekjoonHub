#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q, cmd, k, info;
    string goname;
    cin >> Q;

    map<string, priority_queue<int>> go_infos;

    long long ans = 0;

    while(Q--){
        cin >> cmd >> goname >> k;
        if(cmd == 1){
            priority_queue<int> infos;
            while(k--){
                cin >> info;
                infos.push(info);
            }

            if(!go_infos[goname].empty()){
                while(!infos.empty()){
                    go_infos[goname].push(infos.top());
                    infos.pop();
                }
            }
            else{
                go_infos[goname] = infos;
            }
        }
        else if(cmd == 2){
            while(k--){
                if(go_infos[goname].empty()) break;
                ans += go_infos[goname].top();
                go_infos[goname].pop();
            }
        }
    }
    cout << ans;
}