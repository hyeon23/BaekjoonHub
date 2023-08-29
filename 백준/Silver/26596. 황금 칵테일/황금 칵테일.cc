#include <bits/stdc++.h>
using namespace std;
int main(){
    int M, x;
    string s;
    cin >> M;
    map<string, int> waters;
    while(M--){
        cin >> s >> x;
        waters[s] += x;
    }

    for(auto it = waters.begin(); it != waters.end(); ++it){
        for(auto ia = waters.begin(); ia != waters.end(); ++ia){
            if(it != ia){
                if(floor(it->second * 1.618f) == ia->second){
                    cout << "Delicious!";
                    return 0;
                }
                else if(floor(ia->second * 1.618f) == it->second){
                    cout << "Delicious!";
                    return 0;
                }
            }
        }    
    }

    cout << "Not Delicious...";

    return 0;
}