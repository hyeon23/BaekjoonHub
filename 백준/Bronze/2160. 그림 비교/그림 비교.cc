#include <bits/stdc++.h>
using namespace std;

char arr[51][5][7];

int checkcnt(int n, int m){
    int cnt = 0;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 7; ++j){
            if(arr[n][i][j] != arr[m][i][j]) ++cnt;
        }
    }

    return cnt;
}

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 5; ++j){
            for(int k = 0; k < 7; ++k){
                cin >> arr[i][j][k];
            }
        }
    }

    int min = INT_MAX;

    int f, s;

    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            if(min > checkcnt(i, j)){
                min = checkcnt(i, j);
                f = i;
                s = j;
            }
        }   
    }

    cout << f+1 << ' ' << s+1 << '\n';

    return 0;
}