#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    queue<int> q;
    for(int i=1;i<=n;i++) q.push(i);
    for(long long i=1,k;i<n;i++) {
        k=(i*i*i-1)%q.size();
        for(int i=0;i<k;i++) q.push(q.front()), q.pop();
        q.pop();
    }
    cout << q.front() << '\n';
    return 0;
}