#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(pair<int, string> p1, pair<int, string> p2){
    if(p1.first > p2.first){
        return false;
    }
    else if(p1.first < p2.first){
        return true;
    }
    else{
        return false;
        // if(p1.second > p2.second){
        //     return false;
        // }
        // else{
        //     return true;
        // }
    }
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, string>> vec;
    for(int i = 0; i < N; ++i){
        int x; string s;
        cin >> x >> s;
        vec.push_back({x, s});
    }

    stable_sort(vec.begin(), vec.end(), Pred);

    for(auto i : vec){
        cout << i.first << " " << i.second << '\n';
    }
}