#include <bits/stdc++.h>
using namespace std;

int main(){
    //딸기 -> 초코 -> 바나나 -> 딸기
    int N;
    cin >> N;

    int cur, cnt = 0, curstate = 2;//바나나를 마신 상태여야 처음에 딸기를 조지기 때문

    for(int i = 0; i < N; ++i){
        cin >> cur;
        if(cur == 0){//딸기
            if(curstate == 2){
                curstate = cur;
                ++cnt;
            }
        }
        else if(cur == 1){//초코
            if(curstate == 0){
                curstate = cur;
                ++cnt;
            }
        }
        else if(cur == 2){//바나나
            if(curstate == 1){
                curstate = cur;
                ++cnt;
            }
        }
    }

    cout << cnt;

    return 0;
}