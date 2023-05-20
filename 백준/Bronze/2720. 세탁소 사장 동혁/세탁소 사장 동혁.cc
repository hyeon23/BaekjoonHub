#include <iostream>
using namespace std;

int main(){
    int T;
    int C;

    int coins[4] = {25, 10, 5, 1};

    cin >> T;
    int arr[T][4] = {};

    for(int i = 0; i < T; ++i){
        cin >> C;//센트

        for(int j = 0; j < 4; ++j){
            if(j != 3){
                if(C >= coins[j]){
                    arr[i][j] = C / coins[j];
                    C = C % coins[j];
                }
            }
            else{
                arr[i][j] = C;
            }
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}