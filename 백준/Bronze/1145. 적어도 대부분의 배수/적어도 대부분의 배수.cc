#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(5);
    for(int i = 0; i < 5; ++i){
        cin >> vec[i];
    }

    int start = 1;

    while(true){
        int cnt = 0;

        for(int i = 0; i < 5; ++i){
            if(start % vec[i] == 0) ++cnt;
        }

        if(cnt >= 3) {
            cout << start;
            break;
        }

        ++start;
    }


    return 0;
}