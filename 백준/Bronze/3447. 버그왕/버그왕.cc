#include <string>
#include <iostream>
using namespace std;

int main(){
    string tmp;
    while(getline(cin, tmp)){
        while(tmp.find("BUG") != string::npos){
            int index = tmp.find("BUG");
            tmp.erase(index, 3);
        }
        cout << tmp << '\n';
    }
}