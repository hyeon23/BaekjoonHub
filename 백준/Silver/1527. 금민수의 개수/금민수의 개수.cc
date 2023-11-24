#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans;

void dfs(int s, int cnt){
    if(cnt >= 10) return;
    if(s > B) return;
    if(s >= A) ++ans;
    dfs(s*10 + 4, cnt+1);
    dfs(s*10 + 7, cnt+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> A >> B;
    dfs(0, 0);
    cout << ans << '\n';
    return 0;
}