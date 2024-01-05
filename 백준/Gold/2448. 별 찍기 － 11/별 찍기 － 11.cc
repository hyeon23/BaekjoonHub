#include <bits/stdc++.h>
using namespace std;
int N;
vector<vector<char>> board(6144, vector<char>(6144, ' '));
void recursion(int x, int y, int N){
    if(N == 3){
        board[x][y+2] = '*';
        board[x + 1][y+1] = '*';
        board[x + 1][y+3] = '*';
        for(int i = 0; i < 5; ++i){
            board[x+2][y+i] = '*';
        }
        return;
    }
    recursion(x, y + N / 2, N/2);
    recursion(x + N/2, y, N/2);
    recursion(x + N/2, y + N, N/2);
    return;
}
int main(){
    cin >> N;
    recursion(0, 0, N);

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 2 * N - 1; ++j){
            cout << board[i][j];
        }
        cout << '\n';
    }
    return 0;
}