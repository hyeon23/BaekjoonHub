#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(0);
    
    int T, n, k, t, m, curId, curP, curScore;
    cin >> T;

    while (T--) {
        cin >> n >> k >> t >> m;

        vector<vector<int>> lastScore(n + 1, vector<int>(k+1, 0));
        vector<int> cnt(n + 1, 0);
        vector<int> lastSubmit(n + 1, 0);

        for (int i = 0; i < m; i++) {
            cin >> curId >> curP >> curScore;
            cnt[curId]++;
            lastSubmit[curId] = i;
            lastScore[curId][curP] = max(lastScore[curId][curP], curScore);
        }

        vector<int> sums(n + 1, 0);
        for (int i = 1; i <= n; i++)    
            for (int j = 1; j <= k; j++)    
                sums[i] += lastScore[i][j];

        vector<pair<int, pair<int, pair<int, int>>>> ans;

        for (int i = 1; i <= n; i++)    
            ans.push_back({ -sums[i], {cnt[i], {lastSubmit[i], i}} });

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++)    
            if (ans[i].second.second.second == t)    
                cout << i + 1 << '\n';
    }
}
