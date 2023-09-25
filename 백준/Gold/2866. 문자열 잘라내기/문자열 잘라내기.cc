#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //R, C 테이블

    int R, C;
    cin >> R >> C;

    //가장 위 행을 지운다 가정

    //세로로 읽었을 때, 세로로 읽은 문자열들끼리 중복되는지 확인한다.

    //i) 중복되면 가장 위 행을 지우고 cnt ++ 다음 반복

    //ii) 중복되지 않으면 반복을 멈추로 cnt ret

    vector<string> vec(R);
    for(int i = 0; i < R; ++i){
        cin >> vec[i];
    }

    vector<string> strs;

    for(int i = 0; i < C; ++i){
        string s = "";
        for(int j = 0; j < R; ++j){
            s += vec[j][i];
        }
        strs.push_back(s);
    }


    int cnt = 0;
    for(int k = 1; k < R; ++k){
        map<string, int> m;

        for(int i = 0; i < strs.size(); ++i){
            m[strs[i].substr(k)]++;
        }

        for(auto i : m){
            if(i.second >= 2){
                cout << cnt;
                return 0;
            }
        }

        ++cnt;
    }

    cout << cnt;
    
    return 0;
}