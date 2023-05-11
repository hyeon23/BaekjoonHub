#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[31]{0};
    int isSubmitted;
    
    int arr2[2]{0};


    for(int i = 1; i <= 28; ++i){
        cin >> isSubmitted;

        arr[isSubmitted] = 1;
    }

    int count = 0;

    for(int i = 1; i <= 30; ++i){

        if(arr[i] == 0){
            arr2[count++] = i;
        }
    }

    cout << min(arr2[0], arr2[1]) << endl;
    cout << max(arr2[0], arr2[1]) << endl;

    return 0;
}
