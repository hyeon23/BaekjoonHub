#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> board(2048, vector<char>(2048, ' '));

void recursion(int x, int y, int N){
    if(N == 1){
        board[x][y] = '*';
        return;
    }
    int width = pow(2, N+1) - 3;
    int height = pow(2, N) - 1;
    //depth => 짝수 => ▼
    if(N % 2 == 0){
        //삼각형의 가장 윗부분을 만든다.
        for(int i = y; i < width + y; ++i){
            board[x][i] = '*';
        }
        //위에서부터 내려가며 생성
        for(int i = 1; i < height; ++i){
            board[x + i][y + i] = '*';
            board[x + i][y + width - i - 1] = '*';
        }
        recursion(x + 1, y + pow(2, N-1), N-1);
    }
    //depth => 홀수 => ▲
    else{
        //삼각형의 가장 밑부분을 만든다.
        for(int i = y; i < width + y; ++i){
            board[x + height - 1][i] = '*';
        }
        //밑에서 위로 올라가며 만든다.
        for(int i = 0; i < height; ++i){
            board[x + i][y + width / 2 - i] = '*';
            board[x + i][y + width / 2 + i] = '*';
        }
        recursion(x + height / 2, y + pow(2, N-1), N-1);
    }
    return;
}

int main(){
    int N;
    cin >> N;
    if(N == 1){
        cout << '*' << '\n';
        return 0;
    }
    int width = pow(2, N+1) - 3;
    int height = pow(2, N) - 1;
    recursion(0, 0, N);

    //각 라인마다 마지막 별표가 오는 지점까지 출력
    
    if(N % 2 == 0){
        for(int i = 0; i < height; ++i){
            for(int j = 0; j < width - i; ++j) cout << board[i][j];
            cout << '\n';
        }
    }
    else{
        for(int i = 0; i < height; ++i){
            for(int j = 0; j < width - height + i + 1; ++j) cout << board[i][j];
            cout << '\n';
        }
    }
    return 0;
}