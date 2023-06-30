//DFS 조합 알고리즘 사용
//N명의 사람 중 N/2명을 뽑는 모든 조합의 경우의 수를 찾음
//팀을 나누고, 두 팀의 능력치 차이가 최소가 되는 값을 출력

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool team[20] = {};
int score[20][20] = {};
int N, mymin = 99999999;

void teamset(int idx, int cnt){
    vector<int> start;//스타트 팀원의 인덱스 값
    vector<int> link;//링크 팀원의 인덱스 값

    int start_score = 0;
    int link_score = 0;

    if(cnt == (N/2)){
        for(int i = 0; i < N; ++i){
            if(team[i] == true)
                start.push_back(i);//선택된 사람들은 start 팀 소속
            else
                link.push_back(i);//그 외 사람들은 link 팀 소속
        }

        for(int i = 0; i < (N/2); ++i){
            for(int j = 0; j < (N/2); ++j){
                //각 팀 능력치 합 계산
                start_score += score[start[i]][start[j]];
                link_score += score[link[i]][link[j]];
            }
        }

        if(abs(start_score - link_score) < mymin)
            mymin = abs(start_score - link_score);

        return;
    }

    for(int i = idx; i < N; ++i){
        if(team[i])
            continue;
        else{
            team[i] = true;
            teamset(i, cnt+1);
            team[i] = false;
        }
    }
}

int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> score[i][j];
        }
    }
    teamset(0, 0);
    cout << mymin;
}