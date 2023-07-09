#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for(auto i : delete_list){
        while(find(arr.begin(), arr.end(), i) != arr.end()){
            arr.erase(find(arr.begin(), arr.end(), i));
        }
    }
    return arr;
}