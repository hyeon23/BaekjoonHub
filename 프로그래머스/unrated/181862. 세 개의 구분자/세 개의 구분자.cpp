#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp = "";
    for(int i = 0; i < myStr.size(); ++i){
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c'){
            if(tmp != ""){
                answer.push_back(tmp);
                tmp = "";    
            }
        }
        else{
            tmp += myStr[i];
        }
    }
    
    if(tmp != "")
        answer.push_back(tmp);
    else if(answer.size() == 0)
        answer.push_back("EMPTY");
        
    return answer;
}