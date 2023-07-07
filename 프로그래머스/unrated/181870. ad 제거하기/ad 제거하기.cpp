#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(auto it = strArr.begin(); it != strArr.end(); ++it)
        if((*it).find("ad") == string::npos)
            answer.push_back(*it);
    return answer;
}