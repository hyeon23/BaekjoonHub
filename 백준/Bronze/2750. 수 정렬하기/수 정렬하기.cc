#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N;
    vector<int> vec;
    cin >> N;
    while(N--){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    for(auto i : vec){
        cout << i << endl;
    }
}