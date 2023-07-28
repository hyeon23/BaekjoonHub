#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int maxval = *max_element(citations.begin(), citations.end());
    for(int i = maxval; i >= 0; --i){
        int count = 0;
        for(int j = 0; j < citations.size(); ++j){
            if(citations[j] >= i)
                ++count;
        }
        if(count >= i) return i;
    }
}