#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 우 상 좌 하
    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;
    // N X N 보드 & 사과: 먹으면 1칸 증가
    // 보드 밖 = 벽
    int N, k, l, ax, ay; // 보드 크기, 사과 개수, 방향 변환 횟수

    cin >> N >> k;
    vector<vector<int>> map(N, vector<int>(N));

    //2 = snake, 1 = apple;
    queue<pair<int, int>> curposes;
    queue<pair<int, int>> cmdque;

    curposes.push({0, 0});//x, y
    map[0][0] = 2;

    for (int i = 0; i < k; ++i)
    {
        cin >> ax >> ay;
        map[ax-1][ay-1] = 1;
    }

    cin >> l;

    int time; char r;

    for (int i = 0; i < l; ++i)
    {
        cin >> time >> r;
        //정수 X, 문자 C[왼쪽 = L, 오른쪽 = D 회전]
        cmdque.push({time, r});
    }

    int curT = 0;

    while(true){
        curT++;
        if(!cmdque.empty()){
            if(cmdque.front().first + 1 == curT){
                //방향 전환
                if(cmdque.front().second == 'L'){
                    if(dir == 3) dir = 0;
                    else dir = (dir + 1) % 4;
                }
                else if(cmdque.front().second == 'D'){
                    if(dir == 0) dir = 3;
                    else dir = (dir - 1) % 4;
                }
                cmdque.pop();
            }
        }
        
        //현재 방향으로 진행
        //1. 게임 오버 체크
        //다음으로 이동한위치가 벽 밖 or 몸과 충돌이 아닌 경우
        int nposX = curposes.back().first + dx[dir];
        int nposY = curposes.back().second + dy[dir];

        if(nposX < 0 || nposX >= N || nposY < 0 || nposY >= N || map[nposX][nposY] == 2){
            //게임오버
            cout << curT;
            return 0;
        }
        else if(map[nposX][nposY] == 1){//사과를 만나면
            map[nposX][nposY] = 2;//이동한 위치에 2표시
            curposes.push({nposX, nposY});
        }
        else{//빈칸이라면
            map[curposes.front().first][curposes.front().second] = 0;//이동이 끝난 위치에 0표시
            curposes.pop();
            map[nposX][nposY] = 2;//이동한 위치에 2표시
            curposes.push({nposX, nposY});
            
        }
    }
}