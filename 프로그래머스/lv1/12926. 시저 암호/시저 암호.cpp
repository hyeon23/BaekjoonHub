#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.size(); ++i){
        if(isalpha(s[i])){
            if(isupper(s[i]))
                s[i] = 'A' + (s[i] - 'A' + n) % 26;
            else if(islower(s[i]))
                s[i] = 'a' + (s[i] - 'a' + n) % 26;
        }
    }
    return s;
}