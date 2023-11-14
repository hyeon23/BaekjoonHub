#include <bits/stdc++.h>
using namespace std;

bool is_pal(string str){
    for(int i = 0; i < str.size()/2; ++i)
        if(str[i] != str[str.size() - i - 1]) return false;
    return true;
}

int main(){
    string str;
    cin >> str;

    //팰린드롬 체크 -> 맞으면 현재 길이
    if(is_pal(str)){
        cout << str.size() << '\n';
    }
    else{
        for(int i = 1; i <= str.size(); ++i){
            string tmp = str.substr(0, i);

            reverse(tmp.begin(), tmp.end());

            string input = str + tmp;

            if(is_pal(input)){
                cout << input.size() << '\n';
                return 0;                
            }
        }
    }

    return 0;
}