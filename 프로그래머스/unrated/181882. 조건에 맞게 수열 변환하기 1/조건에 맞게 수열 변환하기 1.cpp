#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer(arr.begin(), arr.end());
    for(auto it = answer.begin(); it != answer.end(); ++it){
        if(*it >= 50 && *it % 2 == 0){
            *it /= 2;
        }
        else if(*it < 50 && *it % 2 == 1){
            *it *= 2;
        }
    }
    return answer;
}