#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> vec;//명예의 전당 리스트
    for(int i = 0; i < score.size(); ++i){
        vec.push_back(score[i]);
        
        if(vec.size() > k){
            sort(vec.begin(), vec.end(), greater<int>());
            vec.pop_back();
            answer.push_back(vec[vec.size() - 1]);
        }
        else{
            sort(vec.begin(), vec.end(), greater<int>());
            answer.push_back(vec[vec.size() - 1]);
        }
    }
    return answer;
}