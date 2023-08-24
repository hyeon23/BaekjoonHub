#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); ++i){
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    cout << str;
}