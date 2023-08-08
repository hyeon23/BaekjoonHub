#include <bits/stdc++.h>
using namespace std;
string s[3][2];
int toint(int time) {
    int n[3];
    for (int i = 0; i < 3; i++) {
        n[i] = time % 60;
        time /= 60;
    }
    return n[2] * 10000 + n[1] * 100 + n[0];
}
int tosec(string time) {
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    int sec = stoi(time.substr(6, 2));
    return (h * 3600 + m * 60 + sec);
}
void input() {
    for (int i = 0; i < 3; i++)
        cin >> s[i][0] >> s[i][1];
}
void solve() {
    for (int i = 0; i < 3; i++) {
        int cnt = 0;
        int first = tosec(s[i][0]), last = tosec(s[i][1]);
        while (true) {
            if (toint(first) % 3 == 0)cnt++;
            if (first == last)break;
            first++;
            first %= (3600 * 24);
        }
        cout << cnt << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    input();
    solve();
}