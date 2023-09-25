#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    int vec[N];
    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }
    sort(vec, vec+N);
    int start = 0;
    int end = 0;
    int ans = 2000000001;
    while(start < N && end < N){
        int res = vec[end] - vec[start];

        if(res < M){
            ++end;
        }
        else{
            ans = min(ans, res);
            start++;
        }
    }
    cout << ans;
}