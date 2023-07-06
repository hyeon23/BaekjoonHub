#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string A = "", B = ""
;    for(int i = 0; i < myString.size(); ++i)
        A += toupper(myString[i]);
    for(int i = 0; i < pat.size(); ++i)
        B += toupper(pat[i]);
    
    if(A.find(B) != string::npos)
        return 1;
    else
        return 0;
}