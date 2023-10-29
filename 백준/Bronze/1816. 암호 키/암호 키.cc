#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool eratosthenes[1000001] = {false, false};

    vector<int> pvec;

    for (int i = 2; i < 1000001; ++i)
    { // 2부터 끝까지 소수로 가정
        eratosthenes[i] = true;
    }

    for (int i = 0; i * i < 1000001; ++i)
    {
        if (eratosthenes[i] == true)
        { // 소수라면
            for (int j = i * i; j < 1000001; j += i)
            {
                eratosthenes[j] = false; // 소수의 배수 -> 소수X
            }
        }
    }

    for (int i = 0; i < 1000001; ++i)
    {
        if (eratosthenes[i] == true)
        { // 소수를 소수 벡터 pvec에 넣기
            pvec.push_back(i);
        }
    }

    int n;
    long long int m;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        for (int j = 0; j < pvec.size(); ++j)
        {
            if (m % pvec[j] == 0)
            { // 1000000보다 작은 소수로 나눠떨어지는 경우
                cout << "NO\n";
                m = 0;
                break;
            }
        }
        if (m != 0)
            cout << "YES\n";
    }
    return 0;
}