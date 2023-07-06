#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool minusvalue(int n){
    if(n < 0)
        return true;
    
    return false;
}

int solution(vector<int> num_list) {
    for(int i = 0; i < num_list.size(); ++i) if(num_list[i] < 0){ return i; }
    
    return -1;
}