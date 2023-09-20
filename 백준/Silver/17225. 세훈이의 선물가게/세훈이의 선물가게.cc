#include <bits/stdc++.h>
using namespace std;

int main(){
    //선물 몇개 & 포장 방법(빨, 파) 선택 가능

    //상민(파랑, A초) / 지수(빨강, B초) -> 포장알바생

    //동시 도착 시 상민이 부터 선물을 가져옴

    //가장 앞 선물 포장 

    //배송 에러 : 손님이 색은 안말하고, 어떤 선물인지만 말함

    //주문 내역을 보고 누가 포장을 잘못했는지 파악

    int A, B, N, t, m;
    char c;
    cin >> A >> B >> N;

    int n = 1;

    int curst = 0;

    int curjt = 0;

    queue<int> qs;
    queue<int> qj;

    for(int i = 0; i < N; ++i){
        cin >> t >> c >> m;

        for(int i = 0; i < m; ++i){
            if(c == 'B'){
                if(curst < t){
                    qs.push(t);
                    curst = t + A;
                }
                else{
                    qs.push(curst);
                    curst += A;
                }
            }
            else if(c == 'R'){
                if(curjt < t){
                    qj.push(t);
                    curjt = t + B;
                }
                else{
                    qj.push(curjt);
                    curjt += B;
                }
            }
        }
    }

    vector<int> slist;
    vector<int> jlist;

    int inum = 1;

    while(!qs.empty() || !qj.empty()){

        int st = 86701;
        int jt = 86701;

        if(!qs.empty()){
            st = qs.front();
        }

        if(!qj.empty()){
            jt = qj.front();
        }

        if(st <= jt){
            slist.push_back(inum);
            qs.pop();
        }
        else{
            jlist.push_back(inum);
            qj.pop();
        }
        ++inum;
    }

    cout << slist.size() << '\n';

    for(int i = 0; i < slist.size(); ++i){
        cout << slist[i] << ' ';
    }
    cout << '\n';

    cout << jlist.size() << '\n';

    for(int i = 0; i < jlist.size(); ++i){
        cout << jlist[i] << ' ';
    }
    cout << '\n';

    return 0;
}