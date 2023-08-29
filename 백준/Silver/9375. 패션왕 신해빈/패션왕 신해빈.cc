#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    string str1, str2;
    while(T--){
        map<string, int> type;
        int n;
        cin >> n;
        while(n--){
            cin >> str1 >> str2;
            type[str2]++;
        }

        int tmp = 1;

        for(auto it = type.begin(); it != type.end(); ++it){
            tmp *= (it->second + 1);
        }

        cout << tmp - 1 << '\n';
    }
}