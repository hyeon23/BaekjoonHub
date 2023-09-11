#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<string> vec;
    for(int i = 1; i < str.size()-2; ++i){
        for(int j = 1; j < str.size()-2; ++j){
            for(int k = 1; k < str.size()-2; ++k){
                if(i + j + k == str.size()){
                    string tmp1 = str.substr(0, i);
                    string tmp2 = str.substr(i, j);
                    string tmp3 = str.substr(i + j, k);

                    reverse(tmp1.begin(), tmp1.end());
                    reverse(tmp2.begin(), tmp2.end());
                    reverse(tmp3.begin(), tmp3.end());

                    vec.push_back(tmp1 + tmp2 + tmp3);
                }
            }   
        }   
    }

    sort(vec.begin(), vec.end());

    cout << vec[0];

    return 0;
}