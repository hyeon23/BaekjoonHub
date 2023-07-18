#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<float, int> A, pair<float, int> B){
    if(A.first == B.first)
        return A.second < B.second;
    return A.first > B.first;
}

vector<int> solution(int N, vector<int> stages) {
    map<int, int> curSM;//스테이지에 도달했으나 클리어하지 못한 플레이어 수
    map<int, int> SM;//스테이지에 도달한 플레이어 수
    vector<pair<float, int>> tmp;
    vector<int> answer;
    
    sort(stages.begin(), stages.end());
    //1 2 2 2 3 3 4 6
    for(int i = 0; i < stages.size(); ++i){
        curSM[stages[i]]++;
        
        for(int j = 1; j <= stages[i]; ++j){
            SM[j]++;
        }
    }
    
    for(int i = 1; i <= N; ++i){
        float fratio;
        if(SM[i] == 0){
            fratio = 0;
        }
        else{
            fratio = curSM[i] / (float)(SM[i]);    
        }
        
        tmp.push_back({fratio, i});
    }
    
    sort(tmp.begin(), tmp.end(), cmp);
    
    for(const auto i : tmp)
        answer.push_back(i.second);
    
    return answer;
}