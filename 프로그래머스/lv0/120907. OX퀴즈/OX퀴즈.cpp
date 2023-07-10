#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i = 0; i < quiz.size(); ++i){
        stringstream ss(quiz[i]);
        string str;
        vector<string> sss;
        while(ss >> str){
            sss.push_back(str);
        }
        if(sss[1] == "+"){
            if(stoi(sss[0]) + stoi(sss[2]) == stoi(sss[4]))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else if(sss[1] == "-"){
            if(stoi(sss[0]) - stoi(sss[2]) == stoi(sss[4]))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    
    return answer;
}