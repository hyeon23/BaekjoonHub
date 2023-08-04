#include <string>
#include <vector>

using namespace std;

int cnt = -1;
int answer = 0;
string dic = "AEIOU";

void dfs(string cur, string target){
    cnt++;
    
    if(cur == target){
        answer = cnt;
        return;
    }    
    
    if(cur.size() >= 5)
        return;
    
    for(int i = 0; i < 5; ++i)
        dfs(cur + dic[i], target);
}

int solution(string word) {
    dfs("", word);
    return answer;
}