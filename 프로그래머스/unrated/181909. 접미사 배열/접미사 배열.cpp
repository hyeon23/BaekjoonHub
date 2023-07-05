#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string curstr;
    for(int i = my_string.size() - 1; i >= 0; --i){
        curstr = my_string.substr(i);
        answer.push_back(curstr);
    }
    
    sort(answer.begin(), answer.end());
        
    return answer;
}