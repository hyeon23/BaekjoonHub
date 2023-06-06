#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    int minv = 10000;
    bool flag = false;
    cin >> N;

    for(int i = N / 5; i >= 0; --i){
        int tempN = N;

        tempN -= 5 * i;

        if(tempN == 0){
            minv = min(minv, i);
            break;
        }

        for(int j = tempN / 3; j > 0; --j){
            tempN -= 3 * j;

            if(tempN == 0){
                minv = min(minv, i + j);
            }
        }
    }

    if(minv == 10000){
        cout << -1;
    }
    else{
        cout << minv;
    }
}