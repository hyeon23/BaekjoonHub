#include <iostream>
using namespace std;

int main(){
    int sum = 0, x = 0;
    for(int i = 0; i < 5; ++i){
        cin >> x;
        sum = (x < 40) ? sum + 40 : sum + x;
    }
    cout << sum / 5;
}