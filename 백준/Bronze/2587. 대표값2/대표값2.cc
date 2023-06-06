#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int average = 0, middle = 0;
    vector<int> vec;

    for(int i = 0; i < 5; ++i){
        int x;
        cin >> x;
        vec.push_back(x);
        average += x;
    }

    average = average / vec.size();

    sort(vec.begin(), vec.end());

    middle = vec[vec.size() / 2];

    cout << average << endl;
    cout << middle;
}