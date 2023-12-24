#include <bits/stdc++.h>
using namespace std;
int N, nm1 = 0, n0 = 0, n1 = 0;
vector<vector<int>> board(2188, vector<int>(2188));
void recursive(int x, int y, int n){
    //현재 크기에 대한 테스트
    int cntm1 = 0;
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(board[x + i][y + j] == -1){
                ++cntm1;
            }
            else if(board[x + i][y + j] == 0){
                ++cnt0;
            }
            else if(board[x + i][y + j] == 1){
                ++cnt1;
            }
        }
    }
    if(cntm1 == n * n){
        nm1++;
        return;
    }
    else if(cnt0 == n * n){
        n0++;
        return;
    }
    else if(cnt1 == n * n){
        n1++;
        return;
    }
    
    //네갈래 갈라지기
    recursive(x, y, n / 3);//00
    recursive(x + n / 3, y, n / 3);//10
    recursive(x + 2 * n / 3, y, n / 3);//20
    recursive(x, y + n / 3, n / 3);//01
    recursive(x, y + 2 * n / 3, n / 3);//02
    recursive(x + n / 3, y + 2 * n / 3, n / 3);//12
    recursive(x + 2 * n / 3, y + n / 3, n / 3);//21
    recursive(x + n / 3, y + n / 3, n / 3);//11
    recursive(x + 2 * n / 3, y + 2 * n / 3, n / 3);//22
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    recursive(0, 0, N);
    cout << nm1 << '\n';
    cout << n0 << '\n';
    cout << n1 << '\n';
    return 0;
}