#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int average = 0, middle = 0;
    vector<int> vec(5);

    for(int i = 0; i < 5; ++i){
        cin >> vec[i];
        average += vec[i];
    }

    average = average / vec.size();

    sort(vec.begin(), vec.end());

    middle = vec[vec.size() / 2];

    cout << average << endl;
    cout << middle;
}