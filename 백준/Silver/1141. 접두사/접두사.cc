#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 원소의 개수(k)가 가장 많은 접두사X 집합을 완성하고, 부분 집합의 개수 2^k를 출력하시오
    int N;
    cin >> N;
    vector<string> vec(N);
    for (int i = 0; i < N; ++i) cin >> vec[i];
    sort(vec.begin(), vec.end()); // -> 사전순 정렬
    int ans = 0;
    for (int i = 0; i < N-1; ++i)
    {
        if (vec[i + 1].substr(0, vec[i].size()) == vec[i])
        { // 접두어가 아닐 때,
            ++ans;
        }
    }

    cout << N - ans;
    return 0;
}