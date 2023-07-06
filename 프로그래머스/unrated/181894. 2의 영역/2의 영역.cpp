#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> indexmem;
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); ++i)
        if(arr[i] == 2)
            indexmem.push_back(i);
    
    if(indexmem.size() == 0)
        answer.push_back(-1);
    else
        for(int i = indexmem[0]; i <= indexmem[indexmem.size()-1]; ++i)
            answer.push_back(arr[i]);
    
    
    
    return answer;
}