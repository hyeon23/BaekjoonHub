#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;

    int curNum = 1;//자연수로 시작
    int cnt = 0;

    while(cnt < N){
        if(to_string(curNum).find(to_string(L)) == string::npos) cnt++;
        curNum++;
    }

    cout << curNum-1;
}