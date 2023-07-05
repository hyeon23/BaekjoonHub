#include <cmath>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b && b == c && c == a){
        answer = 27 * a * pow(a, 2) * pow(a, 3);
    }
    else if(a != b && b != c && c != a){
        answer = a + b + c;
    }
    else{
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }
    return answer;
}