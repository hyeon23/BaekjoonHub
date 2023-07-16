#include <string>
#include <vector>

using namespace std;

long long solution(int num) {
    long long curnum = num;
    long long answer = 0;
    while(curnum != 1){
        if(answer == 500)
            return -1;
        answer++;
        if(curnum % 2 == 0)
            curnum /= 2;
        else
            curnum = curnum * 3 + 1;
    }
    return answer;
}