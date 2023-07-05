#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; ++i){
        bool check = false;
        string str = to_string(i);
        for(int j = 0; j < str.size(); ++j){
            if(str[j] != '0' && str[j] != '5'){
                check = true;
                break;
            }
        }
        if(!check){
            answer.push_back(i);
        }
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
        
    return answer;
}