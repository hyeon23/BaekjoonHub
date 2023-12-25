#include <bits/stdc++.h>
using namespace std;
int N;
vector<vector<char>> board(1001, vector<char>(1001, ' '));

void drawStar(int x, int y, int n){
    //가로길이 = 4 * N - 3
    //세로길이 = 가로길이 + 2(N != 1)
    int width = 4 * n - 3;
    int height = width + 2;

    for(int i = 1; i < width; ++i) board[x][y--] = '*';
    for(int i = 1; i < height; ++i) board[x++][y] = '*';
    for(int i = 1; i < width; ++i) board[x][y++] = '*';
    for(int i = 1; i < height - 2; ++i) board[x--][y] = '*';

    board[x][y--] = '*';
    board[x][y] = '*';

    if(n == 2){
        board[x][y-1] = '*';
        board[x+1][y-1] = '*';
        board[x+2][y-1] = '*';
        return;
    }
    drawStar(x, y-1, n-1);
}
int main(){
    cin >> N;

    int width = 4 * N - 3;
    int height = width + 2;

    //N == 1일 땐, 따로 처리
    if(N == 1){
        cout << "*" << '\n';
        return 0;
    }
    //재귀 시작점 = 최초 너비 - 1
    int x = 0, y = 4 * N - 4;
    drawStar(x, y, N);
    for(int i = 0; i < height; ++i){
        if(i == 1){
            cout << '*' << '\n';
            continue;
        }

        for(int j = 0; j < width; ++j){
            cout << board[i][j];
        }
        cout << '\n';
    }
    return 0;
}