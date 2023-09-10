#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<double> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << fixed;
    cout.precision(3);

    for(int i = 0; i < 7; ++i){
        cout << vec[i] << '\n';
    }
    return 0;
}