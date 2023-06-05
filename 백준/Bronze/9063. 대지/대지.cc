#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> xpos;
    vector<int> ypos;

    while (N--)
    {
        int x, y;
        cin >> x >> y;

        xpos.push_back(x);
        ypos.push_back(y);
    }

    sort(xpos.begin(), xpos.end());
    sort(ypos.begin(), ypos.end());

    if (N == 1)
    {
        cout << 0;
    }
    else
    {
        if (xpos[xpos.size() - 1] == xpos[0] || ypos[ypos.size() - 1] == ypos[0])
        {
            cout << 0;
        }
        else
        {
            cout << (xpos[xpos.size() - 1] - xpos[0]) * (ypos[ypos.size() - 1] - ypos[0]);
        }
    }
}