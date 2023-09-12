#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    vector<string> vec(4);
    for(int i = 0; i < 4; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    set<pair<string, string>> s;

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            s.insert({vec[i], vec[j]});
        }
    }

    for(auto i : s){
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}