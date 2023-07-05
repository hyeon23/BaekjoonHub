#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    int mode = 0;
    string answer = "";
    for(int i = 0; i < code.size(); ++i){
        if(mode == 0){
            if(code[i] == '1'){
                mode = 1;
            }   
            else{
                if(i % 2 == 0)
                    answer += code[i];
            }
        }
        else if(mode == 1){
            if(code[i] == '1'){
                mode = 0;
            }   
            else{
                if(i % 2 == 1)
                    answer += code[i];
            }
        }
    }
    
    if(answer.size() == 0)
        answer = "EMPTY";
    
    return answer;
}