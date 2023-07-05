#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); ++i){
        swap(arr[queries[i][0]], arr[queries[i][1]]);
    }
    
    return arr;
}