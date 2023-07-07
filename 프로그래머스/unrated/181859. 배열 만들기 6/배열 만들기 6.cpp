#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    while(i < arr.size()){
        if(answer.empty()){
            answer.push_back(arr[i]);
            i += 1;
        }
        else{
            if(answer.back() == arr[i]){
                answer.pop_back();
                i += 1;
            }
            else{
                answer.push_back(arr[i]);
                i += 1;
            }
        }
    }
    
    if(answer.empty()) answer.push_back(-1);
    return answer;
}