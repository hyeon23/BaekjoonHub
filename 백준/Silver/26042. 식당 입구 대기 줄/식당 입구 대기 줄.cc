#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    queue<int> q;
    // 2 1
    pair<int, int> ans = {0, 0}; // size, number
    while (n--)
    {
        int cmd, snum;
        cin >> cmd;

        if (cmd == 1){
            cin >> snum;
            q.push(snum);
            if (ans.first < q.size()){
                ans.first = q.size();
                ans.second = q.back();
            }
            else if (ans.first == q.size())
                if (ans.second > q.back())
                    ans.second = q.back();
        }
        else if (cmd == 2)
            if (!q.empty())
                q.pop();
    }
    cout << ans.first << ' ' << ans.second;
}