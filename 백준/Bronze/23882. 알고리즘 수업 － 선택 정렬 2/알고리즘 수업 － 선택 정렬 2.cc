#include <bits/stdc++.h>
using namespace std;

int N, K, cnt = 0;

bool selection_sort(vector<int>& vec){
    for(int last = vec.size()-1; last >= 1; --last){
        int i = last;
        int ival = vec[last];
        for(int idx = 0; idx < last; ++idx){
            if(ival < vec[idx]){
                i = idx;
                ival = vec[idx];
            }
        }

        if(last != i){
            ++cnt;
            swap(vec[last], vec[i]);

            if(cnt >= K){
                return true;
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

    if(selection_sort(vec)){
        for(int i = 0; i < vec.size(); ++i)
            cout << vec[i] << ' ';
    }
    else cout << -1;

    
}