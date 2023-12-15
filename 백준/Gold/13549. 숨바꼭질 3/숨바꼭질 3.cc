#include <bits/stdc++.h>
using namespace std;
int n, k, ans = INT_MAX;
vector<bool> visited(100001, false);
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    deque<pair<int, int>> dq;
    visited[n] = true;
    dq.push_back({n, 0});
    while (!dq.empty())
    {
        int cur = dq.front().first;
        int ccnt = dq.front().second;
        dq.pop_front();
        if(cur == k){
            ans = min(ans, ccnt);
        }
        if (2 * cur < 100001 && !visited[2 * cur])
        {
            visited[2 * cur] = true;
            dq.push_front({2 * cur, ccnt});
        }
        for (int nxt : {cur - 1, cur + 1})
        {
            if (nxt < 0 or nxt >= 100001 or visited[nxt]) continue;
            visited[nxt] = true;
            dq.push_back({nxt, ccnt + 1});
        }
    }
    cout << ans;
}