#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(auto it = num_list.begin() + n; it != num_list.end(); it++)
        answer.push_back(*it);
    for(auto it = num_list.begin(); it != num_list.begin() + n; it++)
        answer.push_back(*it);
    
    return answer;
}