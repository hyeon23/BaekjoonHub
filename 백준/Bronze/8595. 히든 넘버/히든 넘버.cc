#include <string>
#include <iostream>
using namespace std;

int main(){
    int n;
    long long int sum = 0;
    string str;
    string tmp = "";
    cin >> n >> str;
    for(int i = 0; i < n; ++i){
        if(isdigit(str[i])){
            tmp += str[i];
            if(tmp.size() == 6){
                sum += stoi(tmp);
                tmp = "";
                continue;
            }

            if(i == n - 1){
                sum += stoi(tmp);
                tmp = "";
            }
        }
        else{
            if(tmp != ""){
                sum += stoi(tmp);
                tmp = "";
            }
        }
    }
    cout << sum;
}