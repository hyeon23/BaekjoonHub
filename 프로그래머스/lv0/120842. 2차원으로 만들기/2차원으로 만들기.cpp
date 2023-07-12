#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size() / n, vector<int>(n, 0));
    //n X num_list.size() / n의 배열로 별환
    int cnt = 0;
    for(int j = 0; j < num_list.size() / n; ++j){
        for(int i = 0; i < n; ++i){
            answer[j][i] = num_list[cnt];
            cnt++;
        }
            
    }
    
    
            
    
    
        
    return answer;
}