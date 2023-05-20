#include <iostream>
using namespace std;

int main(){
    int arr[9][9] = {};

    int maxVal = -1;
    int maxRow = -1;
    int maxCol = -1;

    for(size_t i = 0; i < 9; ++i){
        for (size_t j = 0; j < 9; ++j)
        {
            int tempval;
            cin >> tempval;

            arr[i][j] = tempval;

            if(arr[i][j] > maxVal){
                maxVal = arr[i][j];
                maxRow = i + 1;
                maxCol = j + 1;
            }
        }
    }

    cout << maxVal << "\n" << maxRow << " " << maxCol;

    return 0;
}