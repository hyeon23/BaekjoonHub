#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string str;
    cin >> N;

    map<string, int> wan;

    for(int i = 0; i < N; ++i){
        cin >> str;
        wan[str]++;
    }

    for(int j = 0; j < N - 1; ++j){
        cin >> str;
        wan[str]--;
    }

    for(auto i : wan){
        if(i.second != 0){
            cout << i.first;
            break;
        }
    }

    return 0;
}