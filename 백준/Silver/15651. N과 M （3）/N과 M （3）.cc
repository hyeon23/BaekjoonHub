#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];      // 정렬된 순열을 담는 배열

void DFS(int depth)
{
    if (depth == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[depth] = i;
        DFS(depth + 1);
    }
}

int main()
{
    cin >> n >> m;
    DFS(0); // 깊이 0부터 DFS 시작
}