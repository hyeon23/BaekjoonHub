#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string polynomial)
{
    stringstream ss(polynomial);
    string tmp;
    string answer = "";
    int xnum = 0;
    int nnum = 0;
    while (ss >> tmp)
    {
        if (tmp != "+")
        {
            if (tmp[tmp.size() - 1] == 'x')
            {
                if(tmp.size() - 1 == 0)
                    xnum += 1;
                else
                    xnum += stoi(tmp.substr(0, tmp.size() - 1));
            }
            else
                nnum += stoi(tmp);
        }
    }
    if (xnum != 0 && nnum != 0){
        if(xnum == 1)
            answer += "x + " + to_string(nnum);
        else
            answer += to_string(xnum) + "x + " + to_string(nnum);
    } 
    else if(xnum != 0)
        if(xnum == 1)
            answer += "x";
        else
            answer += to_string(xnum) + "x";
    else if (nnum != 0)
        answer += to_string(nnum);
    return answer;
}