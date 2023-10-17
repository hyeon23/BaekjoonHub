#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    vector<int> vec(9);
    for(int i = 0; i < 9; ++i){
        cin >> vec[i];
        sum += vec[i];
    }

    int no1, no2;

    for(int i = 0; i < 9; ++i){
        for(int j = i+1; j < 9; ++j){
            if(sum - vec[i] - vec[j] == 100){
                no1 = i;
                no2 = j;
            }
        }
    }

    for(int i = 0; i < 9; ++i){
        if(i != no1 && i != no2) cout << vec[i] << '\n';
    }
}