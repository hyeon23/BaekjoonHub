#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
char str[25][25];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int r, c; cin >> r >> c;
    vector<string> v;

    for(int i = 0; i < r; ++i){
        string s = "";
        for(int j = 0; j < c; ++j){
            cin >> str[i][j];
            if(str[i][j] == '#'){
                if(s.length() > 1) v.push_back(s);
                s = "";
            }
            else{
                s.push_back(str[i][j]);
            }
        }
        if(s.length() > 1) v.push_back(s);
    }
    for(int i = 0; i < c; ++i){
        string s = "";
        for(int j = 0; j < r; ++j){
            if(str[j][i] == '#'){
                if(s.length() > 1) v.push_back(s);
                s = "";
            }
            else{
            s.push_back(str[j][i]);
            }
        }
        if(s.length() > 1) v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v[0] << '\n';
    return 0;
}