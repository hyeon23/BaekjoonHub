#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int N, L;
  deque<pair<int, int>> dq;
  cin >> N >> L;
  for (int i = 0; i < N; ++i) {
    int num;
    cin >> num;
    while(!dq.empty() && dq.back().second >= num){
        dq.pop_back();
    }
    dq.push_back({i, num});
    if(dq.front().first <= i - L){
        dq.pop_front();
    }
    cout << dq.front().second << ' ';
  }
  return 0;
}