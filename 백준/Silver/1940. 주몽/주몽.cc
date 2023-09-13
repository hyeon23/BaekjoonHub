#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int cnt = 0;

    for(int i = 0; i < vec.size(); ++i){
        for(int j = i+1; j < vec.size(); ++j){
            if(vec[i] + vec[j] == M){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}