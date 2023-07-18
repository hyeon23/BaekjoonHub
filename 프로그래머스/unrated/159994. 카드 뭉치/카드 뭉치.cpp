#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    for(const auto i : goal){
        if(i == cards1[0]){
            cards1.erase(find(cards1.begin(), cards1.end(), i));
        }
        else if(i == cards2[0]){
            cards2.erase(find(cards2.begin(), cards2.end(), i));
        }
        else
            return "No";
        
        for(const auto i : cards1)
            cout << i << ' ';
        cout << '\n';
        for(const auto i : cards2)
            cout << i << ' ';
        cout << '\n';
        
    }
    return "Yes";
}