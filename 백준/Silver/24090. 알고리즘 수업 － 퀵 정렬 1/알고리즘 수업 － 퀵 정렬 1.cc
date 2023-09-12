#include <bits/stdc++.h>
using namespace std;

int K, cnt = 0;
pair<int, int> Kp;

int partition(vector<int>& vec, int p, int r){
    int x = vec[r];
    int i = p-1;
    for(int j = p; j <= r-1; ++j){
        if(vec[j] <= x) {
            swap(vec[++i], vec[j]);
            cnt++;
            if(cnt == K) Kp = {min(vec[i], vec[j]), max(vec[i], vec[j])};
        }
            
    }
    if(i+1 != r){
        swap(vec[i+1], vec[r]);
        cnt++;
        if(cnt == K) Kp = {min(vec[i+1], vec[r]), max(vec[i+1], vec[r])};
    }
        
    return i+1;
}

void quick_sort(vector<int>& vec, int start, int end){
    if(start < end){
        int q = partition(vec, start, end);
        quick_sort(vec, start, q-1);
        quick_sort(vec, q+1, end);
    }
}

int main(){
    int N;
    cin >> N >> K;

    vector<int> vec(N);

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    quick_sort(vec, 0, vec.size() - 1);

    if(cnt < K) cout << -1;
    else cout << Kp.first << ' ' << Kp.second;
    return 0;
}