#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    string str1, str2;
    unordered_map<string, string> passwords;

    cin >> N >> M;

    while(N--){
        cin >> str1 >> str2;
        passwords[str1] = str2;
    }

    while(M--){
        cin >> str1;
        cout << passwords[str1] << '\n';
    }
}