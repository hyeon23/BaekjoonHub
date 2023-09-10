#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int sum = 0;

    for(int i = 0; i < vec.size(); ++i){
        if(vec[i] <= L) ++L;
    }

    cout << L;

    return 0;
}