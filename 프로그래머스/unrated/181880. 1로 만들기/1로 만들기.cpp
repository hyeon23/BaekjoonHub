#include <string>
#include <vector>

using namespace std;    
int solution(vector<int> num_list) {
    int count = 0;
    for(int i = 0; i < num_list.size(); ++i){
        int tmp = num_list[i];
        while(tmp != 1){
            if(tmp % 2 == 0){
                tmp = tmp / 2;
            }
            else{
                tmp = (tmp - 1) / 2;
            }   
            count++;
        }
    }
    return count;
}