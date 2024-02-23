#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    priority_queue<int, vector<int>, less<int>> max; //max heap
    priority_queue<int, vector<int>, greater<int>> min; //min heap

    while (N--) {
        int a, size;
        cin >> a;
        if (max.size() == min.size()) max.push(a);
        else min.push(a);

        //swap
        if (!max.empty() && !min.empty() && max.top() > min.top()) {
            int max_val, min_val;
            max_val = max.top();
            min_val = min.top();
            max.pop();
            min.pop();
            max.push(min_val);
            min.push(max_val);
        }
        cout << max.top() << '\n';
    }
    return 0;
}