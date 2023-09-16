#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    if(vec.size() % 2 == 0){
        
        int min1 = 0;
        int min2 = 0;
        for(int i = 0; i < vec.size(); ++i){
            min1 += abs(vec[vec.size()/2-1] - vec[i]);
            min2 += abs(vec[vec.size()/2] - vec[i]);
        }

        if(min1 <= min2) cout << vec[vec.size()/2-1];
        else cout << vec[vec.size()/2];
    }
    else{
        cout << vec[vec.size()/2];
    }
    return 0;
}