#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer;
    stringstream ss(my_string);
    string tmp;
    vector<string> vec;
    while(ss >> tmp)
        vec.push_back(tmp);
    answer = stoi(vec[0]);
    for(int i = 0; i < vec.size(); ++i){
        if(vec[i] == "+")
            answer = answer + stoi(vec[i + 1]);
        else if(vec[i] == "-")
            answer = answer - stoi(vec[i + 1]);
    }
    return answer;
}