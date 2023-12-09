#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void)
{
    int n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (true)
    {
        cin >> n;
        if (n == 0) break;
        stack<pair<long long, long long>> S;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            int idx = i;
            while (!S.empty() && S.top().X >= h)
            {
                ans = max(ans, (i - S.top().Y) * S.top().X);
                idx = S.top().Y;
                S.pop();
            }
            S.push({h, idx});
        }
        while (!S.empty())
        {
            ans = max(ans, (n - S.top().Y) * S.top().X);
            S.pop();
        }
        cout << ans << '\n';
    }
}