#include <bits/stdc++.h>
using namespace std;

int N, K, cnt = 0;

bool bubble_sort(vector<int>& vec){
    for(int last = vec.size() - 1; last >= 1; --last){
        for(int i = 0; i <= last - 1; ++i){
            if(vec[i] > vec[i+1]){
                ++cnt;
                if(cnt >= K) {
                    cout << min(vec[i], vec[i+1]) << ' ' << max(vec[i], vec[i+1]);
                    return false;
                }
                swap(vec[i], vec[i+1]);
            }
        }
    }
    return true;
}

int main(){
    cin >> N >> K;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    if(bubble_sort(vec)){
        cout << -1;
    }
    return 0;
}