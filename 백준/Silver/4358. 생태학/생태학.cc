#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    map<string, int> trees;
    string str;

    double cnt;

    while(getline(cin, str)){
        cnt++;
        if(trees.find(str) != trees.end()){
            trees[str]++;
        }
        else{
            trees[str] = 1;
        }
    }

    cout << fixed;
    cout.precision(4);

    for(auto it = trees.begin(); it != trees.end(); ++it)   
        cout << it->first << " " << (it->second) * 100 / cnt << '\n';
}