#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string str;
    string dic = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int B;
    int sum = 0;

    cin >> str >> B;

    for(int i = 0; i < str.length(); ++i){
        int index = 0;
        for(int j = 0; j < dic.length(); ++j){
            if(dic[j] == str[str.length() -1 - i]){
                index = j;
                break;
            }
        }

        sum += index * pow(B, i);
    }

    cout << sum;

    return 0;
}