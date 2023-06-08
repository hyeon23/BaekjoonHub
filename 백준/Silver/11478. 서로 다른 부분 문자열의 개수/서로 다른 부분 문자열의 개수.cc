#include <set>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    set<string> set;
    cin >> s;
    set.insert(s);
    for(int i = 1; i <= s.length(); ++i){
        for(int j = 0; j < s.length() - i + 1; ++j)
            set.insert(s.substr(j, i));
    }
    cout << set.size();
}