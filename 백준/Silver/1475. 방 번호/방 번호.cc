#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //9 -> 6에 몰빵
    string str;
    cin >> str;

    //0 to 8
    vector<int> vec(9, 0);

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '9') vec[6]++;
        else vec[str[i] - '0']++;
    }

    if(vec[6] % 2 == 0) vec[6] /= 2;
    else vec[6] = (vec[6] + 1) / 2;

    cout << *max_element(vec.begin(), vec.end());
}