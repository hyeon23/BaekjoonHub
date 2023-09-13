#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<string> vec;
    for(int i = 0; i < str.size(); ++i){
        vec.push_back(str.substr(i));
    }
    sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << '\n';
    }
    return 0;
}