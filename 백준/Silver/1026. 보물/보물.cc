#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, sum = 0;

    cin >> N;

    vector<int> Avec(N, 0);
    vector<int> Bvec(N, 0);

    for (int i = 0; i < N; ++i)
        cin >> Avec[i];

    for (int i = 0; i < N; ++i)
        cin >> Bvec[i];

    sort(Avec.begin(), Avec.end());
    sort(Bvec.begin(), Bvec.end(), greater<int>());

    for(int i = 0; i < N; ++i)
        sum += (Avec[i] * Bvec[i]);

    cout << sum;
}