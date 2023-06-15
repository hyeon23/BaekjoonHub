#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long x)
{
    for (long long i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // 소수판단: 그 값의 약수들의 곲은 그 값의 제곱근을 기준으로 대칭
    //-제곱근 이하의 값 까지만 검사를 하면 나머지는 검사를 할 필요가 없다.
    //-sqrt(int x): 제곱근 구하는 함수

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int T, x;

    cin >> T;

    for (unsigned int i = 0; i < T; ++i)
    {
        cin >> x;

        if (x >= 0 && x <= 2)
            cout << 2 << "\n";
        else if (x == 3)
            cout << 3 << "\n";
        else
        {
            while (!is_prime(x))
                ++x;
            cout << x << "\n";
        }
    }
}