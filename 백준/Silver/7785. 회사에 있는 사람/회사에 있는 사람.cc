#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string s1, s2;
    cin >> N;
    
    vector<string> vec;
    multimap<string, string> map;
    for(int i = 0; i < N; ++i){
        cin >> s1 >> s2;
        if(s2 == "enter")
            map.insert({s1, s2});
        else if(s2 == "leave")
            map.erase(map.find(s1));
    }
    for(auto i : map)
        vec.push_back(i.first);

    sort(vec.begin(), vec.end(), greater<string>());

    for(auto i : vec){
        cout << i << '\n';
    }
}