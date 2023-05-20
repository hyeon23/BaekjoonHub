#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    vector<bool> alphaArr;

    cin >> N;

    int count = 0;

    for (int k = 0; k < 26; ++k)
    {
        alphaArr.push_back(false);
    }

    for (int i = 0; i < N; ++i)
    {
        string str = "";
        cin >> str;

    for (int k = 0; k < 26; ++k)
    {
        alphaArr[k] = false;
    }

        bool flag = true;

        for (int j = 0; j < str.length(); ++j)
        {
            if (j == 0)
            {
                alphaArr[str[j] - 97] = true;
            }
            else
            {
                if (str[j] != str[j - 1] && alphaArr[str[j] - 97])
                {
                    flag = false;
                    break;
                }
                else if (str[j] != str[j - 1] && !alphaArr[str[j] - 97])
                {
                    alphaArr[str[j] - 97] = true;
                    continue;
                }
            }
        }

        if (flag)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
