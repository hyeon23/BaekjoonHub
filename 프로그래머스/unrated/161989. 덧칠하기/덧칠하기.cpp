#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<bool> wallmark(n, false);
    
    for(int i = 0; i < section.size(); ++i)
        wallmark[section[i] - 1] = true;
    
    for(int i = 0; i < wallmark.size(); ++i){
        if(wallmark[i]){
            answer++;
            int tmp = (i + m > n) ? n : i + m;
            for(int j = i; j < tmp; ++j)
                wallmark[j] = false;
        }
    }
    return answer;
}