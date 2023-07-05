#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    int startpos = s;
    int endpos = e;
    string str = my_string;
    while(startpos < endpos){
        swap(str[startpos++], str[endpos--]);
    }
    
    answer = str;
        
    return answer;
}