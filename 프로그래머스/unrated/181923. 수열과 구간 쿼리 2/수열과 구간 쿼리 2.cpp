#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int i = 0; i < queries.size(); ++i){
        int minv = 1000001;
        for(int j = queries[i][0]; j <= queries[i][1]; ++j){
            if(arr[j] > queries[i][2])
                minv = min(minv, arr[j]);
        }
        if(minv != 1000001)
            answer.push_back(minv);
        else
            answer.push_back(-1);
    }
    return answer;
}