#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, tt, dt;
    cin >> N;
    vector<pair<int, int>> works;
    for (int i = 0; i < N; ++i)
    {
        cin >> tt >> dt; // 걸리는 시간, 해당 시까지 처리
        works.push_back({tt, dt});
    }
    sort(works.begin(), works.end(), cmp);
    int curT = works[0].second - works[0].first;
    for (int i = 1; i < N; ++i)
    {
        if(curT >= works[i].second) curT = works[i].second;
        curT -= works[i].first;
    }
    if(curT < 0) cout << -1;
    else cout << curT;
    return 0;
}