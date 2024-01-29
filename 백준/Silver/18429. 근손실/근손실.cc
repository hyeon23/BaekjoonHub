#include <bits/stdc++.h>
using namespace std;
int N, K, tmp, ans = 0;
vector<int> upgrade;
vector<bool> visited(9);
void DFS(int depth, int curWeight)
{
    if (curWeight < 500)
    {
        return;
    }

    if (depth == N)
    {
        ++ans;
        return;
    }

    for (int i = 0; i < N; ++i)
    {
        if(visited[i]) continue;
        
        visited[i] = true;
        DFS(depth + 1, curWeight - K + upgrade[i]);
        visited[i] = false;
    }
}
int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp;
        upgrade.push_back(tmp);
    }
    DFS(0, 500);
    cout << ans;
}