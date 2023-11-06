#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    string str = "";

    for(int i = 1; i <= N; ++i){
        str += to_string(i);
    }

    cout << str.find(to_string(N)) + 1 << '\n';

    return 0;
}