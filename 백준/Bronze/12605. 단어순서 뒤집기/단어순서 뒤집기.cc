#include <stack>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    stack<string> stk;
    int N;
    cin >> N;
    cin.ignore();
    int i = 1;
    string tmp;
    while(N--){
        getline(cin, tmp);
        stringstream ss(tmp);
        string tmp2;
        while(ss >> tmp2)
            stk.push(tmp2);
        cout << "Case #" << i << ": ";

        while(!stk.empty()){
            cout << stk.top() << ' ';
            stk.pop();
        }
        cout << '\n';
        ++i;
    }
}