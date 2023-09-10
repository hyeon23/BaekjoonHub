#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<string> vec;
    for(int i = 1; i <= str.size() - 2; ++i){
        for(int j = 1; j <= str.size() - 2; ++j){
            for(int k = 1; k <= str.size() - 2; ++k){
                if(i + j + k == str.size()){
                    string first = str.substr(0, i);
                    string second = str.substr(i, j);
                    string third = str.substr(i+j, k);

                    reverse(first.begin(), first.end());
                    reverse(second.begin(), second.end());
                    reverse(third.begin(), third.end());

                    vec.push_back(first + second + third);
                }
            }
        }
    }

    sort(vec.begin(), vec.end());

    cout << vec[0];
    
    return 0;
}