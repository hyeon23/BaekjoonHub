#include <string>
#include <iostream>
using namespace std;

int main(){
    string str;
    while(true){
        bool trigger = true;
        
        cin >> str;

        if(str == "0")
            break;

        for(int i = 0; i < str.size() / 2; ++i){
            if(str[i] != str[str.size() -1 - i]){
                trigger = false;
                break;
            }
        }

        if(trigger)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
}