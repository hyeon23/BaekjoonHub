#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, sum = 0, cntmax = 0, val = 0;
    cin >> N;
    vector<int> v(N);//값을 저장할 벡터
    vector<int> cnt(8001);//최빈값을 계산할 벡터

    for(int i = 0; i < N; ++i){
        cin >> v[i];
        sum += v[i];//총합 계산
        cnt[v[i] + 4000]++;//최빈값 저장
    }

    sort(v.begin(), v.end());

    //최빈값 중 가장 작은 값
    for(int i = 0; i <= 8000; ++i){
        if(cnt[i] > cntmax){
            cntmax = cnt[i];
            val = i;
        }
    }

    //두번째로 작은 최빈값을 구해야 함
    //이미 위에서 가장 작은 최빈값을 찾아놨으므로, val + 1부터 탐색
    for(int i = val + 1; i <= 8000; ++i){
        if(cnt[i] == cntmax){
            val = i;
            break;
        }
    }
    sum = round(double(sum) / N);

    //1. 산술평균, round(double(sum) / N)을 그대로 사용하면 -0 출력
    //-int로 받아서 사용해야 함
    cout << sum << '\n';
    //2. 중앙값
    cout << v[(N - 1) / 2] << '\n';
    //3. 최빈값
    cout << val - 4000 << '\n';
    //4. 최대 최소 차이(범위)
    cout << v[N - 1] - v[0];
}