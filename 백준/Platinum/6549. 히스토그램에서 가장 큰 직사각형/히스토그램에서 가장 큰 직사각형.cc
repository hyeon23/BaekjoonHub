#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    stack<pair<int, int>> S;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
      int h;
      cin >> h;
      int idx = i;
      while (!S.empty() && S.top().X >= h) {//스택이 비거나 h보다 더 낮은 top이 나올때까지.
        ans = max(ans, 1LL * (i - S.top().Y) * S.top().X);
        idx = S.top().Y;
        S.pop();
      }
      S.push({h, idx}); //top보다 더 높은 h를 만나면 쌓아둔다.
    }
    while (!S.empty()) {
      ans = max(ans, 1LL * (n - S.top().Y) * S.top().X);
      S.pop();
    }
    cout << ans << '\n';
  }
}