#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int oddsum = 0, evensum = 0;
    for(int i = 0; i < num_list.size(); ++i){
        if(i % 2 == 0)
            oddsum += num_list[i];
        else
            evensum += num_list[i];
    }
    answer = max(oddsum, evensum);
    return answer;
}