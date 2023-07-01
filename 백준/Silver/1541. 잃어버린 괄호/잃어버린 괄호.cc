#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool trigger = false;
    int sum = 0;
    string str, num="";
    cin >> str;
    for (int i = 0; i <= str.length();i++)
    {
        if (str[i] == '+' || str[i] == '-'||i==str.length())
        {
            if(trigger)
                sum -= stoi(num);
            else
                sum += stoi(num);

            if(str[i]=='-')
                trigger = true;
                
            num = "";
        }
        else
            num += str[i];
    }
    cout << sum;
}