#include <bits/stdc++.h>
using namespace std;

int N;

int selection_sort(vector<int>& vec1, vector<int>& vec2){
    if(vec1 == vec2) return 1;

    for(int last = vec1.size()-1; last >= 1; --last){
        int i = last;
        int ival = vec1[last];
        for(int idx = 0; idx < last; ++idx){
            if(ival < vec1[idx]){
                i = idx;
                ival = vec1[idx];
            }
        }

        if(last != i){
            swap(vec1[last], vec1[i]);
        }

        if(vec1 == vec2){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i = 0; i < N; ++i) cin >> A[i];
    for(int i = 0; i < N; ++i) cin >> B[i];
    cout << selection_sort(A, B);

    
}