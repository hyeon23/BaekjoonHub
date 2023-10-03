#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, cnt = 0;
    cin >> N;

    for(int i = 1; i <= N; ++i){
        string str = to_string(i);

        for(int j = 0; j < str.size(); ++j){
            if(str[j] == '3' || str[j] == '6' || str[j] == '9')
                ++cnt;
        }
    }

    cout << cnt;

    return 0;
}