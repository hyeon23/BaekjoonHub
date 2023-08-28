#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string str;
    cin >> N;
    
    map<string, int> m;

    while(N--){
        cin >> str;

        string cpy = str;

        for(int i = 0; i < str.size(); ++i){
            rotate(str.begin(), str.begin() + 1, str.end());
            if(m[str] != 0) { 
                m[str]++;
                break;
            }
            
            if(i == str.size() - 1){
                m[cpy]++;
            }
        }
    }

    int cnt = 0;

    for(auto i : m)
        if(i.second != 0)
            cnt++;

    cout << cnt;

    return 0;
}