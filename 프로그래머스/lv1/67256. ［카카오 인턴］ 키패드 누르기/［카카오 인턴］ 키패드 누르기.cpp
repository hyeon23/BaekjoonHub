#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand)
{
    string answer = "";

    pair<int, int> lfpos = {3, 0};
    pair<int, int> rfpos = {3, 2};

    //{num, {xpos, ypos}}
    vector<pair<int, int>> numberdict = {
        {3, 1},
        {0, 0},
        {0, 1},
        {0, 2},
        {1, 0},
        {1, 1},
        {1, 2},
        {2, 0},
        {2, 1},
        {2, 2}};

    // 1 2 3 00 01 02
    // 4 5 6 10 11 12
    // 7 8 9 20 21 22
    //* 0 # 30 31 32
    
    int smalldist;
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            answer += "L";
            lfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            answer += "R";
            rfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
        }
        else
        {
            int ldist = abs(lfpos.first - numberdict[numbers[i]].first) + abs(lfpos.second - numberdict[numbers[i]].second);
            int rdist = abs(rfpos.first - numberdict[numbers[i]].first) + abs(rfpos.second - numberdict[numbers[i]].second);

            if (ldist < rdist)
            {
                answer += "L";
                lfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
            }
            else if (ldist > rdist)
            {
                answer += "R";
                rfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
            }
            else
            {
                if (hand == "left")
                {
                    answer += "L";
                    lfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
                }
                else if (hand == "right")
                {
                    answer += "R";
                    rfpos = {numberdict[numbers[i]].first, numberdict[numbers[i]].second};
                }
            }
        }
    }
    return answer;
}