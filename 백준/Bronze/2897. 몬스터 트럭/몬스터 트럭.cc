#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> vvec(51, vector<char>(51));
int R, C;

int dx[4] = {0, 0, 1, 1};
int dy[4] = {0, 1, 0, 1};

map<int, int> ans;

void Search(int x, int y){
    int ret = 0;

    for(int i = 0; i < 4; ++i){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= R || ny >= C) return;

        if(vvec[nx][ny] == '#') return;

        if(vvec[nx][ny] == 'X') ++ret;
    }

    ans[ret]++;
    return;
}

int main(){
    
    cin >> R >> C;
    
    ans[0] = 0;

    for(int i = 0; i < R; ++i)
        for(int j = 0; j < C; ++j)
            cin >> vvec[i][j];

    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            Search(i, j);
        }
    }

    for(int i = 0; i < 5; ++i){
        if(ans.find(i) == ans.end()){
            ans[i] = 0;
        }
    }

    for(auto i : ans){
        cout << i.second << '\n';
    }

    return 0;
}