#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string preprocess(string str) {
    string result = "";

    for(int i = 0; i < str.size(); ++i){
        if(isalpha(str[i]) || str[i] == '-')
            result += str[i];
    }
    return result;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string max = "";
    string str;
    
    while (true) {
        cin >> str;
        if (str == "E-N-D") break;
        str = preprocess(str);
        max = max.length() < str.length() ? str : max;
    }

    for (auto iter = max.begin(); iter != max.end(); iter++) 
       *iter = tolower(*iter);
    
    cout << max;
}