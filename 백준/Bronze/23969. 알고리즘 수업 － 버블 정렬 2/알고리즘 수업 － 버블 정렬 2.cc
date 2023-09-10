#include <bits/stdc++.h>
using namespace std;

int N, K, cnt = 0;

bool bubble_sort(vector<int>& vec){
    for(int last = vec.size() - 1; last >= 1; --last){
        for(int i = 0; i <= last - 1; ++i){
            if(vec[i] > vec[i+1]){
                ++cnt;
                swap(vec[i], vec[i+1]);
                if(cnt >= K) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    if(bubble_sort(vec)){
        for(int i = 0; i < vec.size(); ++i){
            cout << vec[i] << ' ';
        }
    }
    else cout << -1;
    return 0;
}