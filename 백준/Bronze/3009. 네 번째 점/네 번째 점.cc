//간단하게 풀면 더 쉬운 문제
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    int x1, x2, x3;
    int y1, y2, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if(x1 == x2)
        cout << x3;
    else if(x1 == x3)
        cout << x2;
    else
        cout << x1;

    cout << " ";

    if(y1 == y2)
        cout << y3;
    else if(y1 == y3)
        cout << y2;
    else
        cout << y1;
}