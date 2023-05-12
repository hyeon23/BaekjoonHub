#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    // sol1
    string S;
    int alpha[26];
    cin >> S;

    for (int i = 0; i < 26; ++i)
    {
        alpha[i] = -1;
    }

    for (int i = 0; i < S.length(); ++i)
    {
        if (alpha[(int)S[i] - 97] < 0)
            alpha[(int)S[i] - 97] = i;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << alpha[i] << " ";
    }
    return 0;
}