#include <iostream>
using namespace std;

int func(int x, int y) {
    int temp = x - y;
    if (temp < 0) return 2;
    return func(y, temp) + 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    int x = 0, cnt = 0;

    for (int i = 1; i <= N; i++) {
        int temp = func(N, i);
        if (temp > cnt) {
            x = i, cnt = temp;
        }
    }

    cout << cnt << '\n';
    cout << N << ' ' << x;
    while (N - x >= 0) {
        int temp = N - x;
        N = x; x = temp;
        cout << ' ' << x;
    }
}