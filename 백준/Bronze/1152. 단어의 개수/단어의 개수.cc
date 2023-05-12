#include <iostream>

#include <string>
#include <string.h>

using namespace std;

int main()
{
    string s;
    int count = 0;
    bool flag = true;

    getline(cin, s);

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            flag = true;
            continue;
        }
        else
        {
            if(flag){
                count = count + 1;
            }

            flag = false;
        }
    }

    cout << count;

    return 0;
}