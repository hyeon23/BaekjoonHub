#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(auto it = arr.begin(); it != arr.end(); ++it){
        if(*it >= 50 && *it % 2 == 0)
            answer.push_back(*it / 2);
        else if(*it < 50 && *it % 2 == 1)
            answer.push_back(*it * 2);
        else
            answer.push_back(*it);
    }
    return answer;
}