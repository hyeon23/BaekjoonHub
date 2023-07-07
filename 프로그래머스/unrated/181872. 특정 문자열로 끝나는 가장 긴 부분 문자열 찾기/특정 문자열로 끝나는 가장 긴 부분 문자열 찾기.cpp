#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    answer = myString.substr(0, myString.rfind(pat)) + pat;
        
    return answer;
}