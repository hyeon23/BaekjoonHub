#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

// 에라토스테네스의 체: 소수 구하기 알고리즘
// 골드바흐 파티션
using namespace std;
vector<bool> v;
int T, N;

void check_decimal()
{
    // 기본값 설정
    v[0] = false;
    v[1] = false;

    // 2부터 범위의 제곱근까지 반복
    for (int i = 2; i < sqrt(v.size()); ++i)
        // 소수라면
        if (v[i] == true)
        {
            for (int j = 2; i * j < v.size(); ++j)
                v[i * j] = false;
        }
}

int gold_bach()
{
    // 기본값 설정
    int cnt = 0;

    for (int n = 2; n < N / 2 + 1; ++n)
    {
        // 두 수가 소수인 경우
        if (v[n] == true && v[N - n] == true)
            ++cnt;
    }

    return cnt;
}

int main()
{

    // 확인하고자 하는 수의 반까지
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // TC 입력
    cin >> T;

    // 에러토스테네스의 체를 만들기 위한 벡터
    v.assign(1000001, true);

    // 에러토스테네스의 체 만들기
    check_decimal();

    // TC 반복
    for (int t = 0; t < T; ++t)
    {
        // 골드바흐 파티션의 수를 구하고자 하는 수 입력
        cin >> N;

        // 골드바흐 파티션의 수 출력
        cout << gold_bach() << '\n';
    }

    return 0;
}