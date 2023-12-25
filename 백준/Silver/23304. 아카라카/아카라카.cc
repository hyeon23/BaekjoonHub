#include<bits/stdc++.h>
using namespace std;
string str;
bool isPal(string str){
    for(int i = 0; i < str.size() / 2; ++i){
        if(str[i] != str[str.size() - i - 1]) return false;
    }
    return true;
}
bool recursive(string str){
    if(str.size() == 1) return true;
    else if(!isPal(str)) return false;
    return recursive(str.substr(0, str.size() / 2)) && recursive(str.substr(ceil(str.size() / 2.0f), str.size() / 2));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> str;
    if(recursive(str)) cout << "AKARAKA";
    else cout << "IPSELENTI";
    return 0;
}