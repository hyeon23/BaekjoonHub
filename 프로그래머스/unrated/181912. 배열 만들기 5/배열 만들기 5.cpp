#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(auto str : intStrs){
        long long int tmp = stoll(str.substr(s, l));
        if(tmp > k)
            answer.push_back(tmp);
    }
    return answer;
}