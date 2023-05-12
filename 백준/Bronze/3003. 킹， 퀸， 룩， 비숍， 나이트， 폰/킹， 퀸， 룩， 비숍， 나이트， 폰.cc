#include <iostream>
using namespace std;

int main(){
    //킹 퀸 룩 비숍 나이트 폰
    int setArr[6] = {1, 1, 2, 2, 2, 8};
    int setInputArr[6];
    for(int i = 0; i < 6; ++i){
        int x;
        cin >> x;
        //setInputArr[i] = x - setArr[i];
        cout << setArr[i] - x << " ";
    }

    return 0;
}