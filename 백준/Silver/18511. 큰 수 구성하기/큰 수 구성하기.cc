#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
vector<int> v;

void dfs(int num, int ten){
    if(num > n) return;

    ans = max(ans, num);

    for(int i = 0; i < v.size(); ++i)
        dfs(num + ten * v[i], ten * 10);
}

int main(){
    cin.tie(0);
    cin >> n >> k;

    int input;

    for(int i = 0; i < k; ++i){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    dfs(0, 1);

    cout << ans << '\n';
}