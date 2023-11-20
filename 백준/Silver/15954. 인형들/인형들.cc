#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> vec(N);

    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    int start;
    int end;
    double minSD = DBL_MAX;

    for (int i = K - 1; i < N; ++i) {
        start = 0;
        end = i;

        while (end < N) {
            // 해당 구간 내의 표준 편차를 구하기
            double avg = accumulate(vec.begin() + start, vec.begin() + end + 1, 0.0) / (double)(end - start + 1);

            double curSD = 0;

            for (int j = start; j <= end; ++j)
                curSD += pow(vec[j] - avg, 2);

            curSD = curSD / (double)(end - start + 1);

            // 가장 작은 표준 편차 체크 & 최솟값 갱신
            minSD = min(minSD, sqrt(curSD));

            ++start;
            ++end;
        }
    }

    cout << fixed;
    cout.precision(11);
    cout << minSD << '\n';

    return 0;
}