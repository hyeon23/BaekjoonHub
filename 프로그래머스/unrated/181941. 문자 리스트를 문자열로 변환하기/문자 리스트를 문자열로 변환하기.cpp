#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    
    for(auto i: arr){
        answer += i;
    }
    return answer;
}