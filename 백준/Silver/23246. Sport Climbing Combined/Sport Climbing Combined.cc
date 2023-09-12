#include <bits/stdc++.h>
using namespace std;

struct pp{
    int num;
    int mul;
    int sum;
};

bool cmp(pp A, pp B){
    if(A.mul == B.mul){
        if(A.sum == B.sum){
            return A.num < B.num;
        }
        return A.sum < B.sum;
    }
    return A.mul < B.mul;
}

int main(){
    //리드 + 스피드 + 볼더링 -> 금/은/동
    //세 종목 순위 곱 점수
    //점수가 낮은 사람이 우승

    int N, b, p, q, r;
    cin >> N;

    vector<pp> pvec;

    for(int i = 0; i < N; ++i){
        cin >> b >> p >> q >> r;

         pvec.push_back({b, p * q * r, p + q + r});
    }

    sort(pvec.begin(), pvec.end(), cmp);

    for(int i = 0; i < 3; ++i){
        cout << pvec[i].num << ' ';
    }

    return 0;
}