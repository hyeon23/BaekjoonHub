#include <iostream>

using namespace std;

int main(){
    int N, x, y;
    int count = 0;
    int arr[100][100] = { 0 };

    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> x >> y;

        for(int j = x; j < x + 10; ++j){
            for(int k = y; k < y + 10; ++k){
                if(j < 100 && k < 100)
                    if(arr[j][k] == 1) continue;
                    arr[j][k] = 1;
                    ++count;
            }
        }
    }

    cout << count;

    return 0;
}