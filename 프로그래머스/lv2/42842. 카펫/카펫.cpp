#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int count = brown + yellow;
    for(int i = 1; i <= count; ++i)
        if(count % i == 0)
            answer.push_back(i);
    sort(answer.begin(), answer.end());
    
    vector<int> ans;
    
    int cnt = 0;
    if(answer.size() % 2 == 0){
        while((answer[(answer.size() / 2) + cnt] - 2) * (answer[(answer.size() / 2) - 1 - cnt] - 2) != yellow)
            ++cnt;
        ans.push_back(answer[(answer.size() / 2) + cnt]);
        ans.push_back(answer[(answer.size() / 2) - 1 - cnt]);
    }
    else{
        while((answer[(answer.size() / 2) + cnt] - 2) * (answer[(answer.size() / 2) - cnt] - 2) != yellow)
            ++cnt;
        ans.push_back(answer[(answer.size() / 2) + cnt]);
        ans.push_back(answer[(answer.size() / 2) - cnt]);
    }
    
    return ans;
}