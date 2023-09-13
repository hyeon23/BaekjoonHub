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
            if(cnt == K) { 
                for(int i = 0; i < vec.size(); ++i){
                    cout << vec[i] << ' ';
                }
                return -1000000001;
            }
        }
            
    }
    if(i+1 != r){
        swap(vec[i+1], vec[r]);
        cnt++;
        if(cnt == K) { 
            for(int i = 0; i < vec.size(); ++i){
                cout << vec[i] << ' ';
            }
            return -1000000001;
        }
    }
        
    return i+1;//PIVOT
}

void quick_sort(vector<int>& vec, int start, int end){
    if(start < end){
        int q = partition(vec, start, end);
        if(q == -1000000001) return;
        quick_sort(vec, start, q-1);
        quick_sort(vec, q+1, end);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N >> K;

    vector<int> vec(N);

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    quick_sort(vec, 0, vec.size() - 1);

    if(cnt < K) cout << -1;
    return 0;
}