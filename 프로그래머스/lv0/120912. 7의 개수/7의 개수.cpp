#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    string tmp = "";
    for(int i = 0; i < array.size(); ++i){
        tmp = to_string(array[i]);
        cout << tmp << '\n';
        for(int i = 0; i < tmp.size(); ++i){
            if(tmp[i] == '7')
                ++answer;
        }
    }
        
    return answer;
}