#include <string>
#include <iostream>
using namespace std;

int main(){
    int count = 0;
    string tmp;
    while(getline(cin, tmp, ','))
        ++count;

    cout << count;
}