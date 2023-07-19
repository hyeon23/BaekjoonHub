#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> mpA;
    map<string, int> mpB;
    
    for(int i = 0; i < participant.size(); ++i)
        mpA[participant[i]]++;
    for(int i = 0; i < completion.size(); ++i)
        mpB[completion[i]]++;
    
    for(const auto i : mpA)
        if(i.second > mpB[i.first])
            return i.first;
}