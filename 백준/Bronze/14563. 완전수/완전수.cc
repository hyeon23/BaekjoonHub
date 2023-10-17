#include <bits/stdc++.h>
using namespace std;

int main(){
    //N을 제외한 약수의 합 구하기
    //부족, 완전, 과잉 판별

    int T;
    cin >> T;

    while(T--){
        int N, sum = 0;
        cin >> N;

        for(int i = 1; i <= N - 1; ++i){
            if(N % i == 0) sum += i;
        }

        if(sum == N) cout << "Perfect\n";
        else if(sum < N) cout << "Deficient\n";
        else cout << "Abundant\n";
    }
    return 0;
}