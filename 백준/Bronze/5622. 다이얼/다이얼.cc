#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    string word;

    cin >> word;
    int totalTime = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
            totalTime += 3;
        if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
            totalTime += 4;
        if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
            totalTime += 5;
        if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
            totalTime += 6;
        if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
            totalTime += 7;
        if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
            totalTime += 8;
        if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
            totalTime += 9;
        if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
            totalTime += 10;
    }

    cout << totalTime;
}