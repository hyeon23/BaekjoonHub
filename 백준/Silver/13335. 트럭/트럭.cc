#include <bits/stdc++.h>
using namespace std;

int main(){
    //n개 트럭
    //트럭 순서 변경 불가 & 무게 서로 다름
    //다리 위 w대의 트럭만 동시에 올라갈 수 있음(다리의 길이 w = 트럭의 길이 1 * w)
    //트럭은 단위시간에 하나씩 다리로 올라옴
    //다리위 트럭의 무게의 합은 다리의 최대 하중 L보다 작거나 같아야 함
    int n, w, L, tmp;
    cin >> n >> w >> L;

    queue<int> Strucks;
    queue<pair<int, int>> bridge;
    queue<int> Etrucks;

    int curL = 0;//현재 하중
    int curT = 0;

    for(int i = 1; i <= n; ++i){
        cin >> tmp;
        Strucks.push(tmp);
    }

    while(Etrucks.size() != n){
        
        ++curT;

        if(!bridge.empty()){
            //2. 앞에서 뺴기: q의 길이가 N 이상이라면 빼기
            if(bridge.back().first >= w){
                if(bridge.front().second != -1){
                    Etrucks.push(bridge.front().second);
                    curL -= bridge.front().second;
                }
                bridge.pop();
            }
            else if(bridge.size() >= w){//문제
                if(bridge.front().second != -1){
                    Etrucks.push(bridge.front().second);
                    curL -= bridge.front().second;
                }
                bridge.pop();
            }
        }

        //1. 뒤에서 하나 넣기
        if(!Strucks.empty()){
            if(curL + Strucks.front() <= L){
            //대기: 현재 무게 + 새로 들어올 트럭 무게 > 최대하중
                bridge.push({curT, Strucks.front()});
                curL += Strucks.front();
                Strucks.pop();
            }
            else{//패스: -1을 넣기
                bridge.push({curT, -1});
            }
        }
        else{
            if(bridge.back().first < w){
                bridge.push({curT, -1});
            }
        }
    }

    cout << curT;
}