#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for(int i = 0; i < myString.size(); ++i){
        if(myString[i] == 'A')
            myString[i] = 'B';
        else if(myString[i] == 'B')
            myString[i] = 'A';
    }
    
    if(myString.find(pat) != string::npos) return 1;
    else return 0;
}