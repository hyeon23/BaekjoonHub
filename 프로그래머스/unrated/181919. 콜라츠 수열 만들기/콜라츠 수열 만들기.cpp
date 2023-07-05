#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int x = n;
    while(x != 1){
        answer.push_back(x);
        if(x % 2 == 0){
            x /= 2;
        }
        else{
            x = x * 3 + 1;
        }
    }
    answer.push_back(x);
    
    return answer;
}