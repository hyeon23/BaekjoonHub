#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    map<int, int> posX;//x
    map<int, int> posY;//y
    while(n--){
        cin >> x >> y;
        posX[x]++;
        posY[y]++;
    }

    int ansX = 0, ansY = 0;

    //0 2
    //10 2

    for(auto it = posX.begin(); it != posX.end(); ++it){
        if(it->second >= 2) ansX++;
    }

    for(auto it = posY.begin(); it != posY.end(); ++it){
        if(it->second >= 2) ansY++;
    }

    cout << ansX + ansY;
}