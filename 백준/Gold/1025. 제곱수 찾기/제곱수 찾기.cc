#include <bits/stdc++.h>
using namespace std;

int N, M, ans = -1, chart[10][10];

bool is_square(int num){
    int root = (int)sqrt(num);
    return root * root == num;
}

int main(){
    cin >> N >> M;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            char tmp;
            cin >> tmp;
            chart[i][j] = tmp - '0';
        }
    }

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            for(int x = -N; x < N; ++x){//세로 등차 => -N to N-1
                for(int y = -M; y < M; ++y){//가로 등차 => -M to M
                    if(!x && !y) continue;
                    int r = i, c = j, num = 0;
                    while(r >= 0 && r < N && c >= 0 && c < M){
                        num *= 10;
                        num += chart[r][c];
                        r += x, c += y;
                        if(is_square(num)) ans = max(ans, num);
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}