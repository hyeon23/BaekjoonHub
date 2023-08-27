#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    map<string, int> map;
    cin >> N;
    while(N--){
        string name; int num;
        cin >> name >> num;

        map[name] += num;
    }
    
    for(auto it = map.begin(); it != map.end(); ++it){
        if(it->second == 5) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}