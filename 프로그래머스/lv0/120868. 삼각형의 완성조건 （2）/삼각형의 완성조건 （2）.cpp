#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int MAX = max(sides[0], sides[1]);
    int MIN = min(sides[0], sides[1]);
    //가장 긴 변이 x인 경우
    for(int i = MAX + 1; i < sides[0] + sides[1]; ++i)
        answer++;   
    //가장 긴 변이 sides 중 하나인 경우
    for(int i = 0; i <= MAX; ++i)
        if(i + MIN > MAX)
            answer++;   
        
    return answer;
}