#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        vector<int> A(N);
        
        for(int i = 0; i < N; ++i){
            cin >> A[i];
        }
        vector<int> B(M);

        for(int i = 0; i < M; ++i){
            cin >> B[i];
        }

        //1 1 3 7 8
        //1 3 6
        sort(A.rbegin(), A.rend());
        sort(B.begin(), B.end());

        int start = 0;
        int end = 0;
        int cnt = 0;

        while(start != A.size()){
            if(A[start] > B[end]){
                ++cnt;
                ++end;

                if(end == B.size()){
                    end = 0;
                    start++;
                }
            }
            else {
                end = 0;
                start++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}