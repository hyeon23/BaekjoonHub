#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, A, B;
    cin >> N >> A >> B;

    vector<long long> x21(A);
    vector<long long> x22(B);

    for(long long i = 0; i < A; ++i) cin >> x21[i];
    for(long long i = 0; i < B; ++i) cin >> x22[i];

    sort(x21.begin(), x21.end(), greater<long long>());
    sort(x22.begin(), x22.end(), greater<long long>());

    long long mbeauty = 0;

    for(long long i = 0; i <= N / 2; ++i){//B블록이 사용되는 수에 따라 A블록이 사용되는 양이 달라짐
        if(i > B) continue;
        long long x21num = N - 2 * i;
        if(x21num > A) continue;

        long long sum = 0;
        for(int j = 0; j < i; ++j) sum += x22[j];
        for(int j = 0; j < x21num; ++j) sum += x21[j];
        mbeauty = max(mbeauty, sum);
    }
    cout << mbeauty;
    return 0;
}