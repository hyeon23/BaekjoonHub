#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, tmp;
        cin >> N;
        vector<int> vec(N);
        for(int i = 0; i < N; ++i) cin >> vec[i];
        sort(vec.begin(), vec.end(), greater<int>());
        deque<int> dq;

        for(int i = 0; i < N; ++i){
            if(i % 2 == 0){
                dq.push_front(vec[i]);
            }
            else{
                dq.push_back(vec[i]);
            }
        }
        dq.push_back(dq[0]);
        int dif = 0;
        for(int i = 1; i <= N; ++i){
            dif = max(dif, abs(dq[i] - dq[i-1]));
        }
        cout << dif << '\n';
    } 
    return 0;
}