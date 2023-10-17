#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string N;
    int F;

    cin >> N >> F;

    N[N.size() - 2] = '0';
    N[N.size() - 1] = '0';

    for (int i = 0; i < 100; ++i) {
        N[N.size() - 2] = (i / 10) + '0';
        N[N.size() - 1] = (i % 10) + '0';

        if (stoi(N) % F == 0) {
            cout << setw(2) << setfill('0') << i;
            return 0;
        }
    }

    return 0;
}