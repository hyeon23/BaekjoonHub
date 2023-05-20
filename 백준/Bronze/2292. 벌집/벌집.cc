#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    int count = 0;
    int index = 1;
    cin >> N;

    while(N - index > 0){
        N -= index;
        count++;
        index = count * 6;
    }
    cout << count + 1;

    return 0;
}