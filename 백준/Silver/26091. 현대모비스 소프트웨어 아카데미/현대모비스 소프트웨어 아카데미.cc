#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> vec(N);
    for(int i = 0; i < N; ++i) cin >> vec[i];
    int start = 0;
    int end = vec.size() - 1;
    if(vec.size() < 2) cout << 0;
    else{
        sort(vec.begin(), vec.end());
        int cnt = 0;
        while(start < end){
            if(vec[start] + vec[end] >= M){
                ++cnt;
                --end;
            }
            ++start;
        }
        cout << cnt;
    }

    return 0;
}