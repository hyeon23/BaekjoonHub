#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    int *count;
    string *s;

    cin >> N;

    count = new int[N];
    s = new string[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> count[i] >> s[i];

        for (int k = 0; k < s[i].length(); ++k)
        {
            for (int j = 0; j < count[i]; ++j)
            {
                cout << s[i][k];
            }
        }
        cout << '\n';
    }

    return 0;
}