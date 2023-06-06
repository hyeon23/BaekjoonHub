#include <iostream>
using namespace std;

int main()
{
    int a1, a0, c, n0;

    cin >> a1 >> a0 >> c >> n0;

    int fn = a1 * n0 + a0;
    int cgn = c * n0;

    if (a1 >= 0)
    {
        //해당 x에서 함수 값이 더 크고 기울기가 더 큼
        if (fn <= cgn && a1 <= c)
            cout << "1";
        else
            cout << "0";
    }
    else if(a1 < 0)
    {
        //해당 x에서 함수 값이 더 작고 기울기가 더 작음
        if (fn <= cgn)
            cout << "1";
        else
            cout << "0";
    }
}