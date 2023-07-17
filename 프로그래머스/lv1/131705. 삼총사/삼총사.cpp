#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int vsize = number.size();
    for(int i = 0; i < vsize; ++i)
        for(int j = i + 1; j < vsize; ++j)
            for(int k = j + 1; k < vsize; ++k)
                if(number[i] + number[j] + number[k] == 0)
                    answer++;
    return answer;
}