#include <iostream>
using namespace std;

int main(){
    int d1, d2, d3;

    cin >> d1 >> d2 >> d3;

    if(d1 + d2 + d3 != 180){
        cout << "Error";
    }
    else{
        if(d1 == 60 && d2 == 60 && d3 == 60){
            cout << "Equilateral";
        }
        else if(d1 == d2 || d1 == d3 || d2 == d3){
            cout << "Isosceles";
        }
        else if(d1 != d2 && d1 != d3){
            cout << "Scalene";
        }
    }

    return 0;
}