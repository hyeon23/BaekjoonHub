#include <bits/stdc++.h>
using namespace std;

int maxCount = 0;

void countColumnCandy(char arr[51][51], int size){
    for(int i = 0; i < size; ++i){
        int count = 1;
        for(int j = 0; j < size; ++j){
            if(arr[i][j] == arr[i][j+1])
                ++count;
            else{
                if(count > maxCount)
                    maxCount = count;
                count = 1;
            }
        }
    }
}

void countRowCandy(char arr[51][51], int size){
    for(int i = 0; i < size; ++i){
        int count = 1;
        for(int j = 0; j < size; ++j){
            if(arr[j][i] == arr[j+1][i])
                ++count;
            else{
                if(count > maxCount)
                    maxCount = count;
                count = 1;
            }
        }
    }
}

int main(){
    int boardSize = 0;
    char board[51][51];

    cin >> boardSize;

    for(int i = 0; i < boardSize; ++i)
        for(int j = 0; j < boardSize; ++j)
            cin >> board[i][j];

    for(int i = 0; i < boardSize; ++i){
        for(int j = 0; j < boardSize; ++j){
            //가로부분 swap
            swap(board[i][j], board[i][j+1]);

            //maxCount 찾기
            countRowCandy(board, boardSize);
            countColumnCandy(board, boardSize);

            //원위치
            swap(board[i][j+1], board[i][j]);

            //세로부분 swap
            swap(board[j][i], board[j+1][i]);

            //maxCount 찾기
            countRowCandy(board, boardSize);
            countColumnCandy(board, boardSize);

            //원위치
            swap(board[j][i], board[j+1][i]);
        }
    }
    cout << maxCount << '\n';
}