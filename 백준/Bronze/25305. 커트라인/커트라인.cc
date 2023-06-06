#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, k;
    cin >> N >> k;
    vector<int> vec(N);

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << vec[N - k];
}