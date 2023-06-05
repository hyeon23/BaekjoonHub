#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y, z, max_val, sum;

    while(true){
        cin >> x >> y >> z;

        if(x == 0 && y == 0 && z == 0)
            break;

        max_val = max(x, max(y, z));

        if(x == max_val){
            sum = y + z;
        }
        else if(y == max_val){
            sum = x + z;
        }
        else if(z == max_val){
            sum = x + y;
        }

        if(sum <= max_val){
            cout << "Invalid" << endl;
        }
        else if(x == y && y == z){
            cout << "Equilateral" << endl;
        }
        else if(x == y || y == z || x == z){
            cout << "Isosceles " << endl;
        }
        else{
            cout << "Scalene" << endl;
        }
    }
}