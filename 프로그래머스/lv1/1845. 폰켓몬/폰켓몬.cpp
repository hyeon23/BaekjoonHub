#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int s = nums.size() / 2;
    
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    for(const auto i : nums)
        cout << i << '\n';
    
    return s > nums.size() ? nums.size() : s;
}