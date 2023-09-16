#include <bits/stdc++.h>
using namespace std;

int main(){
    //정렬 -> 절사평균 양쪽 끝에서 두 개씩 제외한 평균
    //정렬 -> 보정 평균 양쪽 끝에서 남은 두개를 가장 가까운 것으로 대체

    int N, K;
    cin >> N >> K;

    vector<double> vec(N);

    for(int i = 0; i < N; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    double javg;
    double bavg;

    //절사평균
    for(int i = K; i < vec.size() - K; ++i){
        javg += vec[i];
    }

    javg = javg / (double)(vec.size() - 2 * K);

    //보정평균
    for(int i = 0; i < K; ++i){
        vec[i] = vec[K];
    }

    for(int i = vec.size() - 1; i >= vec.size() - K; --i){
        vec[i] = vec[vec.size() - K - 1];
    }

    for(int i = 0; i < vec.size(); ++i){
        bavg += vec[i];
    }

    bavg = bavg / (double)(vec.size());

    javg = round(javg * 100) / 100;
    bavg = round(bavg * 100) / 100;

    cout << fixed;
    cout.precision(2);

    cout << javg << '\n';
    cout << bavg << '\n';

    return 0;
}