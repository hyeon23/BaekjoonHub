#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    while (cin >> x >> y >> z)
    {
        if (x == 0 && y == 0 && z == 0)
            break;
        else if(x == 0 || y == 0 || z == 0){
            cout << "wrong" << '\n';
                continue;
        }
        else{
            vector<int> vec;
            vec.push_back(x);
            vec.push_back(y);
            vec.push_back(z);
            sort(vec.begin(), vec.end());
            if ((vec[0] * vec[0]) + (vec[1] * vec[1]) == (vec[2] * vec[2]))
                cout << "right" << '\n';
            else
                cout << "wrong" << '\n';
        }
    }
}