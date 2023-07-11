#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    if((dots[1][0] - dots[0][0]) * (dots[3][1] - dots[2][1]) == (dots[3][0] - dots[2][0]) * (dots[1][1] - dots[0][1]))
        return 1;
    if((dots[2][0] - dots[0][0]) * (dots[3][1] - dots[1][1]) == (dots[3][0] - dots[1][0]) * (dots[2][1] - dots[0][1]))
        return 1;
    if((dots[3][0] - dots[0][0]) * (dots[2][1] - dots[1][1]) == (dots[2][0] - dots[1][0]) * (dots[3][1] - dots[0][1]))
        return 1;
    return answer;
}