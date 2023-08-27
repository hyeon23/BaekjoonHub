#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    int tmp;
    unordered_map<int, int> cdrom;

    while(true){
        cin >> N >> M;
        if(!N && !M) break;
        cdrom.clear();
        
        int ans = 0;

        while(N--){
            cin >> tmp;
            cdrom[tmp]++;
        }
        while(M--){
            cin >> tmp;
            if(cdrom[tmp] != 0) ans++;
        }
        cout << ans << '\n';
    }
}