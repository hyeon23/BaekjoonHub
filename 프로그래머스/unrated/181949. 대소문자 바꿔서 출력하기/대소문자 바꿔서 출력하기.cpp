#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); ++i){
        if(isupper(str[i]))
            cout << (char)tolower(str[i]);
        else if(islower(str[i]))
            cout << (char)toupper(str[i]);
    }
    return 0;
}