#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, k;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }
    cin >> k;

    for(int i = 0; i < k; ++i){
        //k = 2
        //i=0 -> 0 1 2 3
        //i=1 -> 4 5 6 7
        sort(vec.begin() + i*(N/k), vec.begin() + (i+1)*(N/k));
    }

    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << ' ';
    }

    return 0;
}