#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double tmp = (num1 / (double)num2) * 1000;
    return (int)tmp;
}