#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N, total = 0;

bool check(int level){
    for(int i = 0; i < level; ++i)
        if(col[i] == col[level] || abs(col[level] - col[i]) == level - i){
            //대각선 or 같은라인
            //col[i] = x좌표, i = y좌표 -> 차이가 일정하다면, 대각선에 있음
            return false;
        }
    return true;
}

void N_Queen(int x){//N_Queen = 퀸 배치
    if(x == N)
        total++;
    else{
        for(int i = 0; i < N; ++i){
            col[x] = i;
            if(check(x))//유요하다면 다음 퀸 배치
                N_Queen(x + 1);
        }
    }
}

int main(){
    cin >> N;
    N_Queen(0);
    cout << total;
}