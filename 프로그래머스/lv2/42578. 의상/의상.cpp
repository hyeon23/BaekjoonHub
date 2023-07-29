#include <unordered_map>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, vector<string>> clo;
    
    //1 2
    //3 4
    //5 6 7 1 or 2 or 3 or 5
    for(int i = 0; i < clothes.size(); ++i){
        clo[clothes[i][1]].push_back(clothes[i][0]);
    }
    for(auto it = clo.begin(); it != clo.end(); ++it)
       answer *= it->second.size() + 1;
    
    return answer - 1;
}