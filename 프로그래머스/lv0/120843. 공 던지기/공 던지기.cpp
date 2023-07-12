#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    for(int i = 1; i < k; ++i){
        //1 -> 3 -> 1 -> 3 -> 1 -> 3
        answer = (answer + 2) % numbers.size();
    }
    return numbers[answer];
}