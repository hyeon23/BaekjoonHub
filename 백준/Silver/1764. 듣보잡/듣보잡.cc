#include <set>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    string temp;
    cin >> N >> M;
    set<string> set1;
    set<string> set2;
    vector<string> vec;
    for(int i = 0; i < N; ++i){
        cin >> temp;
        set1.insert(temp);
    }
    for(int i = 0; i < M; ++i){
        cin >> temp;
        set2.insert(temp);
    }
    for(auto i : set1){
        if(set2.find(i) != set2.end()){
            vec.push_back(i);
        }
    }
    sort(vec.begin(), vec.end());
    cout << vec.size() << '\n';
    for(auto i : vec){
        cout << i << '\n';
    }
}