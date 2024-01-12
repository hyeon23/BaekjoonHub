#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int, int>> eggs(9);
int ans = 0;
void DFS(int idx){
    if(idx >= n){
        //깨진 계란들의 개수를 세어줌(음수 값)
        int cnt = 0;
        for(int i = 0; i < n; ++i){
            if(eggs[i].first <= 0) ++cnt;
        }
        ans = max(ans, cnt);
        return;
    }
    //이미 깨져있는 계란의 경우
    if(eggs[idx].first <= 0) DFS(idx+1);
    else{
        bool check = false;
        for(int i = 0; i < n; ++i){
            //자기자신 or 이미 깨져 있는 경우 다음 값
            if(idx == i || eggs[i].first <= 0) continue;
            
            check = true;

            //계란 충돌
            eggs[i].first -= eggs[idx].second;
            eggs[idx].first -= eggs[i].second;
            
            DFS(idx+1);
            eggs[i].first += eggs[idx].second;
            eggs[idx].first += eggs[i].second;
        }
        //나를 제외한 모든 계란이 깨진 경우
        if(!check) DFS(n);
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> eggs[i].first >> eggs[i].second;
    }
    DFS(0);
    cout << ans;
}