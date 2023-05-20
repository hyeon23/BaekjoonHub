#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int len = 2;
    int N;

    cin >> N;

    for(int i = 0; i < N; ++i){
        len = len * 2 - 1;
    }

    cout << len * len;

    return 0;
}