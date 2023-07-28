#include <set>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    set<int> set;
    int answer = 0;
    for(int k = 0; k < elements.size(); ++k){
        for(int j = 0; j < elements.size(); ++j){
            int sum = 0;
            for(int i = j; i <= (j + k); ++i)
                sum += elements[i % elements.size()];
            set.insert(sum);
        }
    }
    return set.size();
}