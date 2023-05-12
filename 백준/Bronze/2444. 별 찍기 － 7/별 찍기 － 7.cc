#include <iostream>

using namespace std;

int main(){
    int N;

    cin >> N;

    for(int i = 1; i <= N; ++i){
        for(int j = N; j > i; --j){
            cout << " ";
        }

        for(int k = 0; k < 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i <= N; ++i){
        for(int j = 0; j < i; ++j){
            cout << " ";
        }

        for(int k = 2 * (i - 1); k < 2 * (N - 1) - 1; ++k){
            cout << "*";
        }

        cout << endl;
    }
}