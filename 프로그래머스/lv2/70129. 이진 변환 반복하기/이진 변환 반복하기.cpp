#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int bcnt = 0;
    int zcnt = 0;
    //이진변환 횟수, 제거된 0 개수
    
    
    while(s != "1"){
        ++bcnt;
        while(s.find('0') != string::npos){
            s.erase(s.find('0'), 1);
            ++zcnt;
        }
            
        int tnum = s.size();
        string tmp = "";
        while(tnum){
            tmp = to_string(tnum % 2) + tmp;
            tnum /= 2;
        }
        s = tmp;
    }
    answer.push_back(bcnt);
    answer.push_back(zcnt);
    
    return answer;
}