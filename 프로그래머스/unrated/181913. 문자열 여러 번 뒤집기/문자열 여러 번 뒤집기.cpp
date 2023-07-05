#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    int j, k;
    for(int i = 0; i < queries.size(); ++i){
        j = queries[i][0];
        k = queries[i][1];
        while(j < k)
            swap(my_string[j++], my_string[k--]);
    }
        
    answer = my_string;
    return answer;
}