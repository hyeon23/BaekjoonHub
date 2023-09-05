#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, T;
    long long H, height;
    cin >> N >> H >> T;

    priority_queue<long long> giants;

    for(int i = 0; i < N; ++i){
        cin >> height;
        giants.push(height);
    }

    if(giants.top() < H) {
        cout << "YES\n";
        cout << 0;
        return 0;
    }

    for(int i = 1; i <= T; ++i){
        giants.push((giants.top() / 2) <= 1 ? 1 : giants.top() / 2);
        giants.pop();

        if(giants.top() < H) {
            cout << "YES\n";
            cout << i;
            return 0;
        }
    }
    cout << "NO\n";
    cout << giants.top();

    return 0;
}