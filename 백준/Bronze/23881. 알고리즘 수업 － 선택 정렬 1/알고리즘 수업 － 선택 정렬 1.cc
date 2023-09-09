#include <bits/stdc++.h>
using namespace std;

int N, K, cnt = 0;

bool selection_sort(vector<int>& vec){
    for(int last = vec.size() - 1; last >= 1; --last){
        int i = last;
        int m = vec[i];
        for(int j = 0; j <= last; ++j){
            if(m < vec[j]){
                m = vec[j];
                i = j;
            }
        }
        if(last != i){
            cnt++;
            if(cnt == K) {
                cout << min(vec[last], vec[i]) << ' ' << max(vec[last], vec[i]);
                return false;
            }
            swap(vec[last], vec[i]);
        }
    }
    return true;
}

int main(){
    cin >> N >> K;

    vector<int> vec(N, 0);

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    if(selection_sort(vec)) cout << -1;

    return 0;
}