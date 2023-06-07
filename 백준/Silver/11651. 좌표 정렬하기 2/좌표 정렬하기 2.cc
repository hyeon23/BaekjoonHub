#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> vec;

    for(int i = 0; i < N; ++i){
        int x, y;
        cin >> x >> y;
        vec.push_back({y, x});
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i < N; ++i){
        cout << vec[i].second << " " << vec[i].first << '\n';
    }
}