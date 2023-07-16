#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> dict(10, 0);
    for(int i = 0; i < numbers.size(); ++i)
        dict[numbers[i]] = 1;
            
    for(int i = 0; i < dict.size(); ++i)
        if(dict[i] == 0)
            answer+= i;
    return answer;
}