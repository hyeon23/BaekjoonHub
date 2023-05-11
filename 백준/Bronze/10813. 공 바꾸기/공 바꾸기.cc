#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *arr;
    int N, M;
    cin >> N >> M;

    arr= new int[N];

    int i, j, k;

    for (int jj = 0; jj < N; ++jj)
    {
        arr[jj] = jj + 1;
    }

    for (int a = 0; a < M; ++a)
    {
        cin >> i >> j;
        int temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }

    for (int kk = 0; kk < N - 1; ++kk)
    {
        cout << arr[kk] << " ";
    }

    cout << arr[N - 1];

    return 0;
}