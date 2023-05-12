#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    //sol2
    string alphaCount = "33344455566677788889990000";
    string word;
    cin >> word;
    int totalTime = 0;

    for (int i = 0; i < word.length(); ++i)
    {
        if(alphaCount[word[i] - 65] == '0'){
            totalTime += 10;
        }
        else{
            totalTime += alphaCount[word[i] - 65] - '0';
        }
    }

    cout << totalTime;
}