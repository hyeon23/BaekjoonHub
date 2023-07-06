#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(int i = 0; i < myString.size(); ++i){
        if(myString[i] == 'a')
            myString[i] = toupper(myString[i]);
        else if(isupper(myString[i]) && myString[i] != 'A')
            myString[i] = tolower(myString[i]);
    }
    return myString;
}