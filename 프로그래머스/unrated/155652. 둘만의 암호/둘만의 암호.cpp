#include <set>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    set<char> set;
    for(int i = 0; i < skip.size(); ++i)
        set.insert(skip[i]);
    
    for(int i = 0; i < s.size(); ++i){
        for(int j = 0; j < index;){
            s[i] = s[i] == 'z' ? 'a' : s[i] + 1;
            if(set.find(s[i]) == set.end())
                ++j;
        }
    }
    return s;
}