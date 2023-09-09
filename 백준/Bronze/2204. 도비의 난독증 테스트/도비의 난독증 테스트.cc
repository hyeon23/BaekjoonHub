#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, string> A, pair<string, string> B){
    return A.first < B.first;
}

int main(){
    int n;
    string str, ori;
    while(cin >> n){
        if(n == 0) break;
        vector<pair<string, string>> vec;
        while(n--){
            cin >> str;
            ori = str;
            for(int i = 0; i < str.size(); ++i){
                str[i] = tolower(str[i]);
            }

            vec.push_back({str, ori});
        }

        sort(vec.begin(), vec.end(), cmp);

        cout << vec[0].second << '\n';
    }
    return 0;
}