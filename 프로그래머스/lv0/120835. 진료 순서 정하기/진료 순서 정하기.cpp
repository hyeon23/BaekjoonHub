#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;

    for(const auto v : emergency)
    {
        int count = 1;
        for(const auto v2 : emergency)
        {
            count += v2 > v;
        }
        answer.emplace_back(count);
    }

    return answer;
}