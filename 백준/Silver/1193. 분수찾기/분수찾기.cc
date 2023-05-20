#include <iostream>
using namespace std;

int main(){
    int X;

    cin >> X;
    int count = 1;
    while(true){
        if(X - count > 0){
            X -= count;
            count++;
        }
        else{
            break;
        }
    }

    if(count % 2 == 0){//짝
        cout << X << "/" << count - X + 1;
    }
    else{//홀
        cout << count - X + 1 << "/" << X;
    }

    return 0;
}