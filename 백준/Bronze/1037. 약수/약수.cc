#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int size, tmp;
    vector<int> vec;
    cin >> size;
    for(int i = 0; i < size; ++i){
        cin >> tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    if(size % 2 == 0){
        cout << vec[(size/2) - 1] * vec[(size/2)];
    }
    else{
        cout << vec[size/2] * vec[size/2];
    }
}