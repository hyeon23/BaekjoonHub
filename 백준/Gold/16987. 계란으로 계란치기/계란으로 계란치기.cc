#include <bits/stdc++.h>
using namespace std;
int N, d, w, ans = 0;
vector<pair<int, int>> eggs;
vector<bool> is_broken(9);
vector<bool> is_visited(9);
//가장 왼쪽 에그를 드는 행위
void DFS(int cur_egg_idx){    
    //1. 가장 오른쪽 에그를 들 경우 리턴
    if(cur_egg_idx == N){
        int cnt = 0;
        for(auto e : is_broken){
            if(e) ++cnt;
        }
        ans = max(ans, cnt);
        return;
    }
    //2. 재귀를 통해 모든 에그에 대해 깨지지 않은 현재 들고있지 않은 egg 선택

    if(is_broken[cur_egg_idx]){
        DFS(cur_egg_idx+1);
    }
    else{
        int num = 0;
        for(int i = 0; i < N; ++i){
        //현재 계란이 깨진 상태라면 다음 단계 진행
            if(cur_egg_idx != i && !is_broken[i]){
                ++num;
                eggs[cur_egg_idx].first -= eggs[i].second;
                eggs[i].first -= eggs[cur_egg_idx].second;
                if(eggs[cur_egg_idx].first <= 0) is_broken[cur_egg_idx] = true;
                if(eggs[i].first <= 0) is_broken[i] = true;
                DFS(cur_egg_idx+1);
                if(eggs[cur_egg_idx].first <= 0) is_broken[cur_egg_idx] = false;
                if(eggs[i].first <= 0) is_broken[i] = false;
                eggs[cur_egg_idx].first += eggs[i].second;
                eggs[i].first += eggs[cur_egg_idx].second;
            }
        }
        if(num == 0){
            DFS(cur_egg_idx+1);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //계란 (내구도, 무게)
    //계란 충돌 시, 상대 계란의 무게만큼 내구도가 깎임
    //내구도 0 이하가 되는 순간 깨짐
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> d >> w;
        eggs.push_back({d, w});
    }
    DFS(0);
    cout << ans;
    return 0;
}