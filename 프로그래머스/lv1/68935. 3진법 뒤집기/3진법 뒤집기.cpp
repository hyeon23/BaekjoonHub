#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    vector<int> vec3;
    int answer = 0;
    int cnt = 0;
    //3진법으로 표현
    while(n > 0){
        vec3.push_back(n % 3);
        n /= 3;
    }
    for(auto it = vec3.rbegin(); it != vec3.rend(); ++it){
        answer += (*it * pow(3, cnt));
        ++cnt;
    }
    
    return answer;
}