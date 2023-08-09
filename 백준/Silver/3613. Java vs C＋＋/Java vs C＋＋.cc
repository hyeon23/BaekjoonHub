#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string str;
    cin >> str;
    bool java = false, cpp = false;
    for(int i = 0; i < str.size(); ++i){
        if(isupper(str[i])){
            if(i == 0){
                cout << "Error!";
                return 0;    
            }
            java = true;
        }
        else if(str[i] == '_'){
            if(i == 0 || i == str.size() - 1){
                cout << "Error!";
                return 0;    
            }
            cpp = true;
        }
            
    }

    for(int i = 1; i < str.size(); ++i){
        if(str[i - 1] == '_' && str[i] == '_'){
            cout << "Error!";
            return 0;    
        }
    }

    if(java && cpp){
        cout << "Error!";
        return 0;
    }

    if(!java && !cpp){
        cout << str;
        return 0;
    }

    string retstr = "";
    bool t = false;

    for(int i = 0; i < str.size(); ++i){
        if(java){//java -> cpp
            if(isupper(str[i])){
                retstr += '_';
                retstr += (char)tolower(str[i]);
            }
            else
                retstr += str[i];
        }
        else if(cpp){//cpp -> java
            if(str[i] == '_'){
                t = true;
            }
            else{
                if(t){
                    retstr += toupper(str[i]);
                    t = false;
                }
                    
                else
                    retstr += str[i];
            }
                
        }
    }

    cout << retstr;

    return 0;
}