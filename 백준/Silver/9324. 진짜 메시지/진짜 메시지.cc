#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        map<char, int> dict;
        string str;
        cin >> str;
        bool t;
        for(int i = 0; i < str.size(); ++i){
            dict[str[i]]++;
            t = true;
            if(dict[str[i]] % 3 == 0){
                if(str[i + 1] != str[i]){
                    cout << "FAKE" << '\n';
                    t = false;
                    break;
                }
                else{
                    ++i;
                }
            }
        }

        if(t) cout << "OK" << '\n';
    }
}