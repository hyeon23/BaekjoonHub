#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, i, j, k;

    cin >> N >> M;

    vector<int> buskets;
    vector<int> busketsTEMP;

    for (int a = 0; a < N + 1; ++a)
    {
        buskets.push_back(a);
        busketsTEMP.push_back(-1);
    }

    for (int a = 0; a < M; ++a)
    {
        cin >> i >> j >> k;

        for (int b = 1; b < N + 1; ++b)
        {
            busketsTEMP[b] = buskets[b];
        }

        for (int c = i; c <= j; ++c)
        {
            buskets[c] = busketsTEMP[i + (k + c - 2 * i) % (j - i + 1)];
        }
    }

    for(int d = 1; d < N + 1; ++d){
        cout << buskets[d] << " ";
    }

    return 0;
}