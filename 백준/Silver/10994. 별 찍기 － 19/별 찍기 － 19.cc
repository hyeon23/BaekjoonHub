#include <vector>
#include <iostream>
using namespace std;
int N;
vector<vector<char>> map(401, vector<char>(401, ' '));
void recursive(int x, int y, int n){
    if(n == 1){
        map[x][y] = '*';
        return;
    }

    int len = 4 * n - 3;

    //각 패턴의 양 옆
    for(int i = x; i < x + len; ++i){
        map[i][y] = '*';
        map[i][y + len - 1] = '*';
    }

    //각 패턴의 양 옆
    for(int j = y; j < y + len; ++j){
        map[x][j] = '*';
        map[x + len - 1][j] = '*';
    }
    recursive(x+2, y+2, n-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> N;
    recursive(0, 0, N);//x, y 좌표, 패턴 레벨
    for(int i = 0; i < 4 * N - 3; ++i){
        for(int j = 0; j < 4 * N - 3; ++j){
            cout << map[i][j];
        }
        cout << '\n';
    }
}