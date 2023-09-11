#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int J, N;
        cin >> J >> N;
        vector<int> vec;
        int cnt = 0;

        for(int i = 0; i < N; ++i){
            int R, C;
            cin >> R >> C;//세로 가로
            vec.push_back(R * C);
        }

        sort(vec.begin(), vec.end(), greater<>());

        for(auto i : vec){
            if(J > i){
                J -= i;
                cnt++;
            }
            else{
                cnt++;
                break;
            }
        }
        cout << cnt << '\n';
    }
}