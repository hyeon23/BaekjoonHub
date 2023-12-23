#include <bits/stdc++.h>
using namespace std;
int N, min = INT_MAX;
vector<vector<int>> board(1025, vector<int>(1025, 0));
int recursive(int x, int y, int n){
    vector<int> ans(4);
    if(n == 1) {
        return board[x][y];
    }
    int lu = recursive(x, y, n / 2);
    int ld = recursive(x + n / 2, y, n / 2);
    int ru = recursive(x, y + n / 2, n / 2);
    int rd = recursive(x + n / 2, y + n / 2, n / 2);
    ans[0] = lu;
    ans[1] = ld;
    ans[2] = ru;
    ans[3] = rd;
    sort(ans.begin(), ans.end());
    //두번쨰로 작은 값을 리턴
    return ans[1];
}
int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    cout << recursive(0, 0, N);
    return 0;
}