#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    string s;
    int check = 1;

    cin >> s;

    for (int i = 0; i < s.length() / 2; ++i)
    {
        if(s[i]-'0' != s[s.length() - 1 - i]-'0'){
            check = 0;
            break;
        }
        else{
            if (i == s.length() / 2 - 1)
                check = 1;
        }
    }

    cout << check;

    return 0;
}