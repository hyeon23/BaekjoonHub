#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    
    vector<int> vec(9);

    for(int i = 0; i < 9; ++i){
        cin >> vec[i];
        sum += vec[i];
    }

    for(int i = 0; i < 9; ++i){
        for(int j = i+1; j < 9; ++j){
            if(sum - vec[i] - vec[j] == 100){
                vec.erase(vec.begin() + j);
                vec.erase(vec.begin() + i);
                
                sort(vec.begin(), vec.end());

                for(int i = 0; i < 7; ++i) cout << vec[i] << '\n';

                return 0;
            }
        }
    }

    return 0;
}