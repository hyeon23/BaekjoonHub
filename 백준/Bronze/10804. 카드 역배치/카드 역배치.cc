#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> vec(20);

    for(int i = 1; i <= 20; ++i){
        vec[i-1] = i;
    }
    for(int i = 0; i < 10; ++i){
        int start, end;
        cin >> start >> end;
        reverse(vec.begin() + start - 1, vec.begin() + end);
    }
    for(int i = 0; i < 20; ++i) cout << vec[i] << ' ';
    return 0;
}