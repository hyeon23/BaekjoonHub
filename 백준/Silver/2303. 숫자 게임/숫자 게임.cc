#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> vvec(N, vector<int>(5));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> vvec[i][j];
        }
    }

    int max_digit = -1; // 최대 일의 자리 숫자
    int max_index = -1; // 최대 일의 자리 숫자를 가진 참가자의 인덱스

    for (int n = 0; n < N; ++n) {
        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                for (int k = j + 1; k < 5; ++k) {
                    int sum = vvec[n][i] + vvec[n][j] + vvec[n][k];
                    int last_digit = sum % 10;

                    if (last_digit >= max_digit) {
                        max_digit = last_digit;
                        max_index = n + 1; // 1-based index
                    }
                }
            }
        }
    }

    cout << max_index;

    return 0;
}