#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(int i = 0; i < my_string.size(); ++i)
        if(isupper(my_string[i]))
            answer[my_string[i] - 'A'] += 1;
        else if(islower(my_string[i]))
            answer[my_string[i] - 'A' - 6] += 1;
    return answer;
}