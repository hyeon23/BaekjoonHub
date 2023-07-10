#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string tmp = to_string(n);
    for(int i = 0; i < tmp.size(); ++i){
        answer += (tmp[i] - '0');
    }
    return answer;
}