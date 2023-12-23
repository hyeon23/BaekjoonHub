#include <bits/stdc++.h>
using namespace std;
int N;
vector<vector<char>> board(401, vector<char>(401, ' '));
void recursive(int x, int y, int n){
    if(n == 1) {
        board[x][y] = '*';
        return;
    }
    int len = 4 * n - 3;
    for(int i = x; i < x + len; ++i){
        board[i][y] = '*';
        board[i][y + len - 1] = '*';
    }
    for(int j = y; j < y + len; ++j){
        board[x][j] = '*';
        board[x + len - 1][j] = '*';
    }
    recursive(x + 2, y + 2, n - 1);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N;
    recursive(0, 0, N);
    for(int i = 0; i < 4 * N - 3; ++i){
        for(int j = 0; j < 4 * N - 3; ++j){
            cout << board[i][j];
        }
        cout << '\n';
    }
}