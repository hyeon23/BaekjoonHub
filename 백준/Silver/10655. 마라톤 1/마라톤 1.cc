#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> TargetX(N);
    vector<int> TargetY(N);

    for(int i = 0; i < N; ++i){
        cin >> TargetX[i] >> TargetY[i];
    }

    int dist = 0;

    int answer = INT_MAX;

    for(int i = 0; i < N-1; ++i){//총 거리 구하기
        dist += abs(TargetX[i] - TargetX[i+1]) + abs(TargetY[i] - TargetY[i+1]);
    }
    for(int i = 1; i < N-1; ++i){//생략된 체크 포인트
        int tmp = dist;

        tmp -= abs(TargetX[i] - TargetX[i-1]) + abs(TargetY[i] - TargetY[i-1]);
        tmp -= abs(TargetX[i+1] - TargetX[i]) + abs(TargetY[i+1] - TargetY[i]);
        tmp += abs(TargetX[i+1] - TargetX[i-1]) + abs(TargetY[i+1] - TargetY[i-1]);
        
        answer = min(answer, tmp);
    }

    cout << answer;

    return 0;
}