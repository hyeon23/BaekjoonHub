#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char d;
    cin >> n >> d;

    map<char, int> m;

    for(int i = 1; i <= n; ++i){
        string tmp = to_string(i);

        for(int j = 0; j < tmp.size(); ++j){
            m[tmp[j]]++;
        }
    }

    cout << m[d];

    return 0;
}