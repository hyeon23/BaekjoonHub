#include <bits/stdc++.h>
using namespace std;
int N;
vector<vector<int>> board(1025, vector<int>(1025));
int recursion(int x, int y, int n){
    vector<int> vec;
    if(n == 2){
        vector<int> tmp(4);
        int v1 = board[x][y];
        int v2 = board[x+1][y];
        int v3 = board[x][y+1];
        int v4 = board[x+1][y+1];
        tmp[0] = v1, tmp[1] = v2, tmp[2] = v3, tmp[3] = v4;
        sort(tmp.begin(), tmp.end());
        return tmp[2];
    }
    //n = 2 -> 1개
    //n = 4 -> 4개
    //n = 6 -> 9개
    vec.push_back(recursion(x, y, n / 2));
    vec.push_back(recursion(x + n / 2, y, n / 2));
    vec.push_back(recursion(x, y + n / 2, n / 2));
    vec.push_back(recursion(x + n / 2, y + n / 2, n / 2));
    sort(vec.begin(), vec.end());
    return vec[2];
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    cout << recursion(0, 0, N);
    return 0;
}