#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    stringstream ss(str);
    string tmp;

    int sum = 0;

    while(ss >> tmp){
        if(tmp[0] == '[')
            continue;
        else if(tmp[0] ==']')
            sum += 8;
        else if(isdigit(tmp[0]))
            sum += 8;
        else if(isalpha(tmp[0]))
            sum += tmp.size() + 12;
    }
    cout << sum;
}