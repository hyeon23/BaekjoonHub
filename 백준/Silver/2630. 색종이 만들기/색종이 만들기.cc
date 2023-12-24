#include <bits/stdc++.h>
using namespace std;
int N, wn = 0, bn = 0;
vector<vector<int>> board(129, vector<int>(129));
vector<vector<bool>> visited(129, vector<bool>(129));
void recursive(int x, int y, int n){
    //현재 크기에 대한 테스트
    int wcnt = 0;
    int bcnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(board[x + i][y + j] == 0){
                ++wcnt;
            }
            else if(board[x + i][y + j] == 1){
                ++bcnt;
            }
        }
    }
    if(wcnt == n * n){
        wn++;
        return;
    }
    else if(bcnt == n * n){
        bn++;
        return;
    }
    
    //네갈래 갈라지기
    recursive(x, y, n / 2);
    recursive(x + n / 2, y, n / 2);
    recursive(x, y + n / 2, n / 2);
    recursive(x + n / 2, y + n / 2, n / 2);
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    recursive(0, 0, N);
    cout << wn << '\n';
    cout << bn << '\n';
    return 0;
}