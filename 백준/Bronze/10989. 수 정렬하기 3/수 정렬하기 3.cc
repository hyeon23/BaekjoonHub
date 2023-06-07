#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    vector<int> vec(10001);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int in;
        cin >> in;
        vec[in] += 1;
    }
    for (int i = 1; i < 10001; ++i)
        for (int j = 0; j < vec[i]; ++j)
            cout << i << '\n';
}