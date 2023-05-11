#include <iostream>
#include <vector>

using namespace std;

int main()
{
        vector<int> vec;
    int N, M;
    cin >> N >> M;

    int i, j, k;

    for (int jj = 0; jj < N; ++jj)
    {
        vec.push_back(jj + 1);
    }

    for (int a = 0; a < M; ++a)
    {
        cin >> i >> j;
        int temp = vec[i-1];
        vec[i-1] = vec[j-1];
        vec[j-1] = temp;
    }

    for (int kk = 0; kk < N - 1; ++kk)
    {
        cout << vec[kk] << " ";
    }

    cout << vec[N - 1];

    return 0;
}