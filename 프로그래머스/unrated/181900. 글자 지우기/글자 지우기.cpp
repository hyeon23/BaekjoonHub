#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string str = my_string;
    
    for(int i = 0; i < indices.size(); ++i){
        str.replace(indices[i], 1, "-");
    }
    
    while(str.find("-") != string::npos){
        str.erase(str.find("-"), 1);
        cout << str.find("-") << '\n';
    }
        
        
    return str;
}