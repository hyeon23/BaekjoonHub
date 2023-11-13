#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    map<char, int> m;
    
    for(char c = 'a'; c < 'z' + 1; ++c){
        m[c] = 0;
    }
    
    for(int i = 0; i < str.size(); ++i){
        m[str[i]]++;
    }
    
    for(auto i : m){
        cout << i.second << ' ';
    }
    
    return 0;
}