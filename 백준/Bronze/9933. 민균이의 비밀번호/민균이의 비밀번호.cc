#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    map<string, int> m;
    while(N--){
        string s;
        cin >> s;

        m[s]++;
        reverse(s.begin(), s.end());
        m[s]++;
    }

    for(auto it = m.begin(); it != m.end(); ++it){
        if(it->second == 2){
            cout << it->first.size() << ' ' << it->first[it->first.size() / 2];
            return 0;
        }
    }
}