#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
    string str;
    while(getline(cin, str)){
        if(str == "*") break;

        stringstream ss(str);
        string tmp;
        
        ss >> tmp;

        char c = tolower(tmp[0]);
        bool t = true;
        while(ss >> tmp){
            if(c != tolower(tmp[0])){
                cout << "N" << '\n';
                t = false;
                break;
            }
        }
        if(t) cout << "Y" << '\n';
    }
}