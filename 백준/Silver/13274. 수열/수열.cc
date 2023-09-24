#include <bits/stdc++.h>
using namespace std;

long long X;
long long trans(long long x){
    return x + X;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, K, L, R;
    cin >> N >> K;
    vector<long long> vec(N);
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < K; ++i){
        cin >> L >> R >> X;
        transform(vec.begin() + L - 1, vec.begin() + R, vec.begin() + L - 1, trans);
        if(X >= 0){//양수를 더할 경우
            sort(vec.begin() + L - 1, vec.end());
        }
        else{//음수를 더할 경우
            sort(vec.begin(), vec.begin() + R);
        }
    }
    for(int i = 0; i < N; ++i){
        cout << vec[i] << ' ';
    }
    return 0;
}