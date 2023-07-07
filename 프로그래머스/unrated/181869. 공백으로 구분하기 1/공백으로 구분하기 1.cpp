#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream ss(my_string);
    string tmp;
    while(ss >> tmp){
        answer.push_back(tmp);
    }
    
    return answer;
}