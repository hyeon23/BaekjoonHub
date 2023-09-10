#include <bits/stdc++.h>
using namespace std;

int main(){
    //각 반 수학 시험 성적 통계
    //최대, 최소, 점수 & 점수 차이
    int K, N;
    cin >> K;
    for(int i = 0; i < K; ++i){
        cin >> N;
        vector<int> vec(N);

        for(int i = 0; i < N; ++i){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());

        int m=-1;

        for(int i = 0; i < N - 1; ++i){
            m = max(m, vec[i+1]-vec[i]);
        }

        cout << "Class " << i+1 << '\n';
        cout << "Max " << vec[vec.size()-1] << ", Min " << vec[0] << ", Largest gap " << m << '\n';
    }
    return 0;
}