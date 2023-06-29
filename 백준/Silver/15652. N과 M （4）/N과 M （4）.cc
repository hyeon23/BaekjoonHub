#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];

void DFS(int depth, int num)
{
    if (depth == m)
    {
        for (int i = 0; i < m; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = num; i <= n; ++i){
        arr[depth] = i;
        DFS(depth + 1, i);
    }
}

int main(){
    cin >> n >> m;
    DFS(0, 1);
    return 0;
}