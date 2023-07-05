#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string sumstr = "";
    for(int i = my_string.size() - 1; i >= 0; --i){
        sumstr = my_string[i] + sumstr;
        if(is_suffix == sumstr){
            answer = 1;
            break;
        }
    }
        
            
    return answer;
}