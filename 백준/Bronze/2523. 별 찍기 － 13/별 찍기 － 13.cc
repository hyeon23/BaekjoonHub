#include <bits/stdc++.h>
using namespace std;

int main(){
    int level;
    cin >> level;
    //1 to level
    //n-1 to 1;

    for(int i = 1; i <= level; ++i) {
        for(int j = 0; j < i; ++j)
            cout << '*';
        cout << '\n';
    }

    for(int i = level - 1; i >= 1; --i) {
        for(int j = 0; j < i; ++j)
            cout << '*';
        cout << '\n';
    }
    
    return 0;
}