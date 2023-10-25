#include <iostream>
#include <string>
using namespace std;
string k;
long long l, r, pivot;
bool ans;
int main() {
    cin >> k;
    for (int i = 0; i < k.size() - 1; i++)//나누는 횟수
    {
        pivot++;
        l = 1;
        r = 1;
        ans = 0;
        for (int j = 0; j < pivot; j++)
            l *= k[j] - '0';
        for (int t = pivot; t < k.size(); t++)
            r *= k[t] - '0';
        if (l == r)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1) { cout << "YES" << '\n'; }
    else { cout << "NO" << '\n'; }
}