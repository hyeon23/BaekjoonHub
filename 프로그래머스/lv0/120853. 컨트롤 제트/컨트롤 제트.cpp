#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    string str;
    string prem;
    int answer = 0;
    while(ss >> str){
        if(str == "Z"){
            answer -= stoi(prem);
            prem = "Z";
        }
        else{
            answer += stoi(str);
            prem = str;
        }
    }
    return answer;
}