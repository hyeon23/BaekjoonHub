#include <string>
#include <iostream>
using namespace std;
bool hans(int n)
{
    string tmp = to_string(n);
    if (tmp.length() > 1)
    {
        int d1 = tmp[0] - '0';
        int d2 = tmp[1] - '0';
        int d = d2 - d1;
        for (int i = 1; i < tmp.size(); ++i){
            if (tmp[i] - tmp[i-1] != d)
                return false;
        }
    }
    return true;
}

using namespace std;

int main()
{
    int x, count = 0;
    cin >> x;

    for (int i = 1; i <= x; ++i)
    {
        if (hans(i))
            ++count;
    }
    cout << count;
}