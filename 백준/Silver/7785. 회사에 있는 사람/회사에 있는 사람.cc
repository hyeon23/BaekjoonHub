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
    cin >> N;
    set<string> set;
    for(int i = 0; i < N; ++i){
        string s1, s2;
        cin >> s1 >> s2;

        if(s2 == "enter")
            set.insert(s1);
        else
            set.erase(s1);
    }

    for(auto iter = set.rbegin(); iter != set.rend(); ++iter){
        cout << *iter << "\n";
    }
}