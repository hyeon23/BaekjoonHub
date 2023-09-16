#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, Q, L, R;
    cin >> N >> Q;

    vector<int> A(N+1);

    for(int i = 1; i <= N; ++i) cin >> A[i];

    sort(A.begin(), A.end());

    partial_sum(A.begin(), A.end(), A.begin());

    for(int i = 0; i < Q; ++i){
        cin >> L >> R;
        cout << A[R] - A[L-1] << '\n';
    }
    return 0;
}