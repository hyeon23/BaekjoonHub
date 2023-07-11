#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; ){
        if(answer % 3 == 0 || to_string(answer).find('3') != string::npos)
            ++answer;
        else{
            ++answer;
            ++i;
        }
    }
    return answer - 1;
}