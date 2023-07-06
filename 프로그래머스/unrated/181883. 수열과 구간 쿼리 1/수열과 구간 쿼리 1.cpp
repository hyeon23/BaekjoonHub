#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i : arr)
        answer.push_back(i);
    
    for(int i = 0; i < queries.size(); ++i)
        for(int j = queries[i][0]; j <= queries[i][1]; ++j){
            answer[j]++;
        }
            
    return answer;
}