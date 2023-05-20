#include <iostream>

using namespace std;

int main(){
    int N, x, y;
    int arr[100][100] = { 0 };

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> x >> y;

        for(int j = x; j < x + 10; ++j){
            for(int k = y; k < y + 10; ++k){
                if(j < 100 && k < 100)
                    arr[j][k] = 1;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < 100; ++i){
        for(int j = 0; j < 100; ++j){
            if(arr[i][j] == 1)
                count++;
        }
    }

    cout << count;

    return 0;
}