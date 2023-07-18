#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    for(const auto i : goal){
        if(i == cards1[0])
            cards1.erase(cards1.begin());
        else if(i == cards2[0])
            cards2.erase(cards2.begin());
        else
            return "No";
    }
    return "Yes";
}