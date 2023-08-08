#include <string>
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    string tmp;
    while(getline(cin, tmp, ','))
        sum += stoi(tmp);
    cout << sum;
}