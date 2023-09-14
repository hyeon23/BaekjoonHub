#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<unsigned long long> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin() + 1, vec.end());

    unsigned long long start = 1;

    while(start != vec.size()){
        if(vec[0] > vec[start]){
            vec[0] += vec[start];
            start++;
        }
        else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}