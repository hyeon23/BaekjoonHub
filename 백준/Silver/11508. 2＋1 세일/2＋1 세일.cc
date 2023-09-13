#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int cost = 0;

    for(int i = 0; i < vec.size(); ++i){
        if((i+1) % 3 != 0){
            cost += vec[i];
        }
    }

    cout << cost;

    return 0;
}