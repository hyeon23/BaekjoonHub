/*
 * Problem :: 11067 / 모노톤길
 *
 * Kind :: Math
 *
 * Insight
 * - 모노톤길의 특성
 *   + x 좌표가 작은 카페부터 들른다
 *   + i 번째 카페의 x 좌표와 i+1 번째 카페의 x 좌표가 서로 다르면
 *     i 번째 카페의 y 좌표와 i+1 번째 카페의 y 좌표가 서로 같아야 한다
 *   + x 좌표가 같은 카페들의 순서는
 *     y 좌표가 증가하는 순서이거나 감소하는 순서이다
 *
 * - 일단 주어진 카페들의 좌표를
 *   x 좌표가 증가하는 순서, x 좌표가 같으면 y 좌표로 증가하는 순서로 정렬해보자
 *   + ... (2,1) -> (3,1) -> [(3,3) -> (5,-1)] -> (5,1) -> (5,3) -> (6,-1) -> ..
 *     x 좌표가 달라질 때는 y 좌표가 같아야 한다
 *     # 이때 달라진 x 좌표를 기준으로 같은 x 좌표에 있는 카페들을
 *       y 좌표가 감소하는 순서로 바꾸어 주자!
 *       -> x 좌표가 증가하는 순서, x 좌표가 같으면 y 좌표가 증가하는 순서로 정렬했을 때
 *          (o = 카페, 왼쪽 숫자 = y 좌표, 아래 숫자 = x 좌표)
 *
 *          4              o       o
 *                         | \     | \
 *          3              o  |    | |
 *                         |  |    | |
 *          2          o - o   \   o |
 *                     |        |  | |
 *          1  o - o - o        |  | |
 *                              |  | |
 *                               \ |  \
 *         -1                      o   o
 *             0   1   2   3       5   6
 *
 *       -> x 좌표가 달라질 때 달라진 x 좌표를 기준으로 같은 x 좌표에 있는 카페들을
 *          y 좌표가 감소하는 순서로 바꾸어 주었을 때
 *          (o = 카페, 왼쪽 숫자 = y 좌표, 아래 숫자 = x 좌표)
 *
 *          4              o - - - o
 *                         |       |
 *          3              o       |
 *                         |       |
 *          2          o - o       o
 *                     |           |
 *          1  o - o - o           |
 *                                 |
 *                                 |
 *         -1                      o - o
 *             0   1   2   3       5   6
 *
 * Point
 * - 산책로는 항상 존재한다 <= 모노톤길이 항상 존재한다
 *
 * - 시작이 항상 (0,0) 이다
 *   + x 좌표가 0 이고 y 좌표가 음수인 카페가 주어지는 경우를 고려해주어야 한다
 *     # (0,0), (0,-1), (0,-2) 가 주어진다면
 *       정렬할 때 (0,-2) -> (0,-1) -> (0,0) 이 된다
 *       -> (0,0) -> (0,-1) -> (0,-2) 로 뒤집어 주어야 하는데
 *          이를 (-1, 0) 이라는 가상의 카페가 처음 시작때 존재한다고 가정하여 해결하였다
 *
 * - vector<int> A = {1, 2, 3};
 *   reverse(A.begin(), A.begin()+2);
 *   // A = {2, 1, 3}
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;

    while(T--){
        int N; cin >> N;
        vector<pair<int, int>> cafes(N+1);

        for(int i = 1; i <= N; ++i){
            cin >> cafes[i].first >> cafes[i].second;
        }

        cafes[0] = {-1, 0}; /*Off by error 해결을 위한 가상 시작 카페 설정*/
        /*x 좌표가 증가하는 순서, x 좌표가 같으면 y 좌표가 증가하는 순서대로 정렬*/
        /*x 좌표는 0 이상이므로, 가상의 시작 카페 = cafes[0]*/

        sort(cafes.begin(), cafes.end());//오름 -> 오름 정렬

        int idx = 1;/*시작 인덱스*/

        while(idx <= N){
            /*현재 카페와 이전 카페의 x좌표가 같으면 올바른 모노톤길(수직 구간)*/
            if(cafes[idx].first == cafes[idx-1].first){
                idx++;/*다음 카페 탐색*/
            }
            /*현재 카페와 이전 카페의 y좌표가 같으면 올바른 모노톤길(수평 구간)*/
            else if(cafes[idx].second == cafes[idx-1].second){
                idx++;/*다음 카페 탐색*/
            }
            else{
                auto spos = cafes.begin() + idx;

                int x = cafes[idx].first;

                while(idx <= N && x == cafes[idx].first) ++idx;

                auto epos = cafes.begin() + idx;

                reverse(spos, epos);
            }
        }

        int M, k;
        cin >> M;

        for(int i = 0; i < M; ++i){
            cin >> k;
            cout << cafes[k].first << ' ' << cafes[k].second << '\n';
        }
    }
}