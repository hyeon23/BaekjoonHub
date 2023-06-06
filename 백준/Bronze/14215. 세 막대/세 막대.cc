#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;

    for(int i = 0; i < 3; ++i){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    while(true){
        if(vec[0] + vec[1] <= vec[2]){
            --vec[2];
        }
        else{
            cout << vec[0] + vec[1] + vec[2];
            break;
        }
    }
    
}