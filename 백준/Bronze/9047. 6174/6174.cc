#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    string tmp, A, B, t1, t2;
    cin >> T;
    while(T--){
        int cnt = 0;
        cin >> tmp;
        while(tmp != "6174"){
            t1 = tmp;
            t2 = tmp;
            while(t1.size() < 4) t1 = "0" + t2;
            while(t2.size() < 4) t2 = "0" + t2;
            sort(t1.begin(), t1.end());
            A = t1;
            sort(t2.begin(), t2.end(), greater<>());
            B = t2;
            tmp = to_string(stoi(B) - stoi(A));
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}