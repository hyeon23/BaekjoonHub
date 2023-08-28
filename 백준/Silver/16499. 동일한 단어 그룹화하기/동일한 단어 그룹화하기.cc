#include <bits/stdc++.h>
using namespace std;

int main(){
    //c 1 a 1 t 1
    int N;
    string str;
    cin >> N;
    
    map<map<char, int>, int> m;

    while(N--){
        cin >> str;

        string cpy = str;
        map<char, int> tmp;
        for(int i = 0; i < str.size(); ++i){
            tmp[str[i]]++;
        }

        m[tmp]++;
    }

    cout << m.size();

    return 0;
}