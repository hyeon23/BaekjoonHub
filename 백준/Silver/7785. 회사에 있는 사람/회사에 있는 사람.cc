#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    string s1, s2;
    cin >> N;
    multimap<string, string> map;
    for(int i = 0; i < N; ++i){
        cin >> s1 >> s2;
        if(s2 == "enter")
            map.insert({s1, s2});
        else if(s2 == "leave")
            map.erase(s1);
    }
    for(auto iter = map.rbegin(); iter != map.rend(); ++iter)
        cout << (*iter).first << '\n';
}