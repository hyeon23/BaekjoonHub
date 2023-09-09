#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, I;
    string str;
    vector<string> vec;
    cin >> N >> I;
    for(int i = 0; i < N; ++i){
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());

    cout << vec[I-1];
    return 0;
}