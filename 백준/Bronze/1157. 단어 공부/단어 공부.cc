#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    cin >> s;

    for (int i = 0; i < 26; ++i)
    {
        vec.push_back(0);
    }

    for (int i = 0; i < s.length(); ++i)
    {
        s[i] = toupper(s[i]); // 문자열 대문자 변환

        // 대문자 char
        vec[s[i] - 65]++;
    }

    int maxIndex = 0;

    for (int i = 0; i < 26; ++i)
    {
        if (vec[maxIndex] < vec[i])
        {
            maxIndex = i;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        if(i == maxIndex)
            continue;
        else{
            if(vec[maxIndex] == vec[i]){
                cout << "?";
                return 0;
            }
        }
    }

    cout << s2[maxIndex];

    return 0;
}