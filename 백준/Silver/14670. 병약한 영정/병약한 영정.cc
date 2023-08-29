#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, R, e, n, L, tmp;
    map<int, int> philldic;//효능, 이름
    cin >> N;
    while(N--){
        cin >> e >> n;
        philldic[e] = n;
    }
    cin >> R;
    while(R--){
        cin >> L;
        bool t = false;
        vector<int> jinchal;
        for(int i = 0; i < L; ++i){
            cin >> tmp;//질병
            if(philldic.count(tmp) == 0){
                t = true;
            }
            else{
                jinchal.push_back(philldic[tmp]);
            }
        }
        if(!t){
            for(auto i : jinchal){
                cout << i << ' ';
            }
        }
        else cout << "YOU DIED";
        cout << '\n';
    }
}