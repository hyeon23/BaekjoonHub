#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *arr;
    int N, M, i, j;
    cin >> N >> M;
    arr = new int[N + 1];

    for (int m = 1; m <= N; m++)
    {
        arr[m] = m;
    }

    while (M--)
    {
        cin >> i >> j;

        for (int a = 0; a < (j - i + 1) / 2; a++)
        {
            int temp = arr[j - a];
            arr[j - a] = arr[i + a];
            arr[i + a] = temp;
        }
    }

    for(int i = 1; i <= N; ++i){
        cout << arr[i] << " ";
    }
}