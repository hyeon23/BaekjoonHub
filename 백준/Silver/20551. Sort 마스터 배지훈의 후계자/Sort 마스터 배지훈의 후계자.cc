#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M, tmp;
    cin >> N >> M;

    vector<int> vec(N);//idx, val
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        vec[i] = tmp;
    }

    sort(vec.begin(), vec.end());
    
    int Q;

    for(int i = 0; i < M; ++i){
        cin >> Q;

        int idx = lower_bound(vec.begin(), vec.end(), Q) - vec.begin();

        if(idx != N && vec[idx] == Q){
            cout << idx << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
    return 0;
}