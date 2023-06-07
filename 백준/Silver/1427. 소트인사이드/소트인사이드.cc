#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string N;
    vector<char> vec;
    cin >> N;

    for(int i = 0; i < N.length(); ++i){
        vec.push_back(N[i]);
    }

    sort(vec.begin(), vec.end(), greater<char>());

    for(auto i : vec){
        cout << i;
    }

    return 0;
}