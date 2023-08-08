#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; ++i){
        string str;
        cin >> str;
        
        if(str == "P=NP")
            cout << "skipped" << '\n';
        else{
            stringstream ss(str);
            string tmp;
            int sum = 0;
            while(getline(ss, tmp, '+')){
                sum += stoi(tmp);
            }
            cout << sum << '\n';
        }
    }
}