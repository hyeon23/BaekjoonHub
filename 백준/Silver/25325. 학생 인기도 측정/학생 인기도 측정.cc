#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> A, pair<string, int> B){
    if(A.second == B.second){
        return A.first < B.first;
    }
    return A.second > B.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    
    int n;
    cin >> n;

    map<string, int> ingi;


    for(int i = 0; i < n; ++i){
        cin >> str;
        ingi[str] = 0;
    }

    cin.ignore();

    string str2;

    for(int i = 0; i < n; ++i){
        getline(cin, str2);
        stringstream ss(str2);
        string tmp;

        while(ss >> tmp){
            ingi[tmp]++;
        }
    }

    vector<pair<string, int>> vec(ingi.begin(), ingi.end());

    sort(vec.begin(), vec.end(), cmp);

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i].first << " " << vec[i].second << '\n';
    }

    return 0;
}