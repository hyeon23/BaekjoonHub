#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M, tmp;
    cin >> N >> M;
    vector<int> A;
    for(int i = 0; i < N + M; ++i){
        cin >> tmp;
        A.push_back(tmp);
    }
    sort(A.begin(), A.end());
    for(int i = 0; i < A.size(); ++i)
        cout << A[i] << ' ';
}
