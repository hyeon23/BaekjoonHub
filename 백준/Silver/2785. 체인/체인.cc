#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N;
    cin >> N;
    vector<long long> vec(N);

    for(long long i = 0; i < N; ++i)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    //기본 답 = N-1 - i

    long long ans = N-1;

    long long cnt = 0;

    while(vec.size() != 1){
        vec[vec.size() - 2] += vec[vec.size() - 1];
        vec.pop_back();

        cnt++;

        vec[0]--;

        if(vec[0] == 0){
            for(int i = 0; i < vec.size()-1; ++i){
                vec[i] = vec[i+1];
            }
            vec.pop_back();
        }
    }

    cout << cnt;

    return 0;
}