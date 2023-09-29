#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(true){
        cin >> a >> b;

        if(a == 0 && b == 0) break;

        (a > b) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}