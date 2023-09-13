#include <bits/stdc++.h>
using namespace std;
 
int N, K, cnt = 0;

void heapify(vector<int>& vec, int k, int n){
    int left = 2*k;
    int right = 2*k+1;
    int smaller;
    if(right <= n){
        if(vec[left] < vec[right]){
            smaller = left;
        }
        else{
            smaller = right;
        }
    }
    else if(left <= n) smaller = left;
    else return;

    if(vec[smaller] < vec[k]){
        ++cnt;
        swap(vec[k], vec[smaller]);
        if(cnt == K) {
            for(int i = 1; i <= N; ++i){
                cout << vec[i] << ' ';
            }
            return;
        }
        heapify(vec, smaller, n);
    }
}

void build_min_heap(vector<int>& vec, int n){
    for(int i = n/2; i >= 1; --i){
        heapify(vec, i, n);
    }
}

void heap_sort(vector<int>& vec){//vec[0...n-1]정렬
    build_min_heap(vec, N);
    for(int i = N; i >= 2; --i){
        ++cnt;
        swap(vec[1], vec[i]);
        if(cnt == K) {
            for(int i = 1; i <= N; ++i){
                cout << vec[i] << ' ';
            }
            return;
        }
        heapify(vec, 1, i-1);
    }

}

int main(){
    cin >> N >> K;
    vector<int> vec(N+1);
    for(int i = 1; i <= N; ++i){
        cin >> vec[i];
    }

    heap_sort(vec);

    if(cnt < K) cout << -1;
}