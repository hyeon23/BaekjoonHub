#include <string>
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    string t;
    string tmp;
    while(getline(cin, tmp)){
        
        for(int i = 0; i < tmp.size(); ++i){
            if(tmp[i] != ',') t += tmp[i];
            else{
                sum += stoi(t);
                t = "";
            }
        }
    }
    sum += stoi(t);
    cout << sum;
}