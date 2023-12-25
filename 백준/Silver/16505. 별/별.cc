#include <bits/stdc++.h>
using namespace std;
int N;
/*
N=0 -> 1 1
N=1 -> 2 2
N=2 -> 4 4
N=3 -> 8 8
*/
vector<vector<char>> board(1025, vector<char>(1025, ' '));
void recursion(int x, int y, int n){
    if(n == 0) {
        board[x][y] = '*';
        return;
    }

    recursion(x, y, n-1);
    recursion(x+ pow(2, (n-1)), y, n-1);
    recursion(x, y+ pow(2, (n-1)), n-1);
}

int main(){
    cin >> N;
    recursion(0, 0, N);

    int len = pow(2, N);

    for(int i = 0; i < len; ++i){
        for(int j = 0; j < len; ++j){
            if(j > pow(2, N) - i) continue;
            cout << board[i][j];
        }
        cout << '\n';
    }

    return 0;
}