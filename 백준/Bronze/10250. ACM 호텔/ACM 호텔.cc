#include <iostream>
using namespace std;

int main(){
    int T, H, W, N, count, curH, curW;
    cin >> T;

    for(int i = 0; i < T; ++i){
        count = 0, curH = 0, curW = 0;
        cin >> H >> W >> N;

        for(int j = 0; j < W; ++j){
            for(int k = 0; k < H; ++k){
                ++count;

                if(count == N){
                    curH = k + 1;
                    curW = j + 1;
                    break;
                }
            }

            if(count == N)
                break;
        }

        cout << curH;
        if(curW / 10)
            cout << curW << '\n';
        else
            cout << 0 << curW << '\n';

    }
}