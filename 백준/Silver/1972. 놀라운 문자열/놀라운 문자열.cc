#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(true){
        cin >> str;
        if(str == "*") break;
        if(str.size() > 1){
            for(int i = 1; i < str.size(); ++i){
                map<string, int> dic;
                bool t = false;
                for(int j = 0; j + i < str.size(); ++j){
                    string tmp1(1, str[j]);
                    string tmp2(1, str[j + i]);
                    //0쌍, 1쌍, 2쌍
                    dic[tmp1 + tmp2]++;
                }

                for(auto k : dic){
                    if(k.second > 1){
                        t = true;
                        cout << str << " is NOT surprising." << '\n';
                        break;
                    }
                }
                if(t) break;
                else if(i == str.size() - 1)
                    cout << str << " is surprising." << '\n';
            }
        }
        else{
            cout << str << " is surprising." << '\n';
        }
    }
}