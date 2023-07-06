#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    for(int i = 0; i < str_list.size(); ++i){
        if(str_list[i] == "l"){
            answer.insert(answer.begin(), str_list.begin(), str_list.begin() + i);
            break;
        }
        else if(str_list[i] == "r"){
            answer.insert(answer.begin(), str_list.begin() + i + 1, str_list.end());
            break;
        }
    }
        
    return answer;
}