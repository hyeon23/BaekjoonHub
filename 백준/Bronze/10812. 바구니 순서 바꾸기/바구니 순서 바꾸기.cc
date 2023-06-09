#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //sol2: #include <algorithm> rotate()를 이용한 간단 구현
    int n, m; cin >> n >> m; vector<int> v;

    for(int i = 1; i <= n; ++i){
        v.push_back(i);
    }

    while(m--){
        int i, j, k; cin >> i >> j >> k;

        //범위 (i - 1) ~ (j - 1)
        //시작 값은 k번째 값으로 변경 & rotation
        //왼쪽으로
        rotate(v.begin() + (i-1), v.begin() + (k-1), v.begin() + j);
    }

    for(int a : v)
        cout << a << " ";

    cout << "\n";

    return 0;
}