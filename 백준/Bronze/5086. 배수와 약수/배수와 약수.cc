#include <iostream>
using namespace std;

int main(){
    int A, B;

    while(true){
        cin >> A >> B;

        if(A == 0 && B == 0)
            break;

        if(B % A == 0){
            cout << "factor" << endl;
        }
        else if(A % B == 0){
            cout << "multiple" << endl;
        }
        else{
            cout << "neither" << endl;
        }
    }
}