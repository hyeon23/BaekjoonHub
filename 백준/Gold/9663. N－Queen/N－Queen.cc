#include <bits/stdc++.h>
using namespace std;
int N, ans = 0;
vector<bool> visited(16, false);
vector<int> board(16, -1);
bool check(int row, int col){
    for(int i = 0; i < row; ++i){
        //row: 현재 퀸을 놓을 x위치
        //col: 현재 퀸을 놓을 y위치
        //i : 
        //1. 가로 배치 체크는 자동으로 수행
        //2. 세로 배치 체크
        //3. 대각선 배치 체크
        if(board[i] == col || abs(row - i) == abs(col - board[i])){
            return false;
        }
    }
    return true;
}
void N_Queen(int row){
    if(row == N){//모든 체스말 선택 완료
        ++ans;
        return;
    }
    for(int col = 0; col < N; ++col){
        if(check(row, col)){
            board[row] = col;
            N_Queen(row+1);
            board[row] = -1;
        }
    }
}

int main(){
    cin >> N;
    N_Queen(0);
    cout << ans;
    return 0;
}