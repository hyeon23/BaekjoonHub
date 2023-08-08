#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string X;
    cin >> X;
    int sum = 0;
    
    string dic = "0123456789abcdef";

    if(X.substr(0, 2) == "0x"){        
        string nx = X.substr(2);
        int sz = nx.size() - 1;
        for(int i = sz; i >= 0; --i){
            sum += dic.find(nx[i], 0) * (int)pow(16, sz - i);
        }
            
    }
    else if(X[0] == '0'){
        string nx = X.substr(1);
        int sz = nx.size() - 1;
        for(int i = sz; i >= 0; --i)
            sum += (nx[i] - '0') * (int)pow(8, sz - i);
    }
    else{
        string nx = X.substr(0);
        sum = stoi(nx);
    }
    cout << sum;
}