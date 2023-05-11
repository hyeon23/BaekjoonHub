#include <iostream>
using namespace std;

int main(){
    int max[9];

    for (size_t i = 0; i < 9; ++i)
    {
        int x;
        cin >> x; 
        max[i] = x;
    }

    int maxValue = max[0];
    int maxIndex = 1;

    for (size_t i = 1; i < 9; i++)
    {
        if(maxValue < max[i]){
            maxValue = max[i];
            maxIndex = i + 1;
        }
    }

    cout << maxValue << endl;
    cout << maxIndex << endl;
    
    

    return 0;
}