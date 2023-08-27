#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; char T; string tmp;
    set<string> s;
    cin >> N >> T;
    while(N--){
        cin >> tmp;
        s.insert(tmp);
    }
    if(T == 'Y') cout << s.size();
    else if(T == 'F') cout << s.size() / 2;
    else if(T == 'O') cout << s.size() / 3;
}