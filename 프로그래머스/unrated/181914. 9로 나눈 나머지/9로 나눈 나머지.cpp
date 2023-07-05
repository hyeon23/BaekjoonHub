#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer, sum = 0;
    
    for(int i = 0; i < number.size(); ++i)
        sum += number[i] - '0';
    
    answer = sum % 9;
    
    return answer;
}