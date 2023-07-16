#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>());
    return stoll(str);
}