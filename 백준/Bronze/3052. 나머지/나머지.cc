#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    int arr[42] = { -1,};
    for(int i = 0; i < 10; ++i){
        int x;
        cin >> x;
        arr[x % 42] = 1;
    }

    int count = 0;

    for(int i = 0; i < 42; ++i){
        if(arr[i] == 1)
            ++count;
    }

    cout << count;

    return 0;
}