#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    int tempN = 2;

    while(N != 1){
        if(N % tempN == 0){
            N /= tempN;
            cout << tempN << endl;
            continue;
        }
        else{
            tempN++;
        }
    }
}