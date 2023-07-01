#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, tmp, count = 0;
    cin >> N;

    tmp = N;

    do{
        int d1 = tmp / 10;
        int d2 = tmp % 10;
        int d3 = (d1 + d2) % 10;

        string d4 = to_string(d2) + to_string(d3);
        tmp = stoi(d4);
        count++;
    }while(N != tmp);

    cout << count;
}