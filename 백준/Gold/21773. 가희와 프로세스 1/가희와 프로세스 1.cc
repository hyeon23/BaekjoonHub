#include <bits/stdc++.h>
using namespace std;

struct process{
    int A;
    int B;
    int C;
};

struct cmp{
    bool operator()(process p1, process p2){
        if(p1.C == p2.C)
            return p1.A > p2.A;
        return p1.C < p2.C;
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //우선순위 큐: 우선순위 값 큰것 -> id가 가장 작은 것
    //실행된 프로세스 -> 실행 필요 시간 - 1
    //잔여 프로세스 -> 우선순위 + 1
    int T, n, A, B, C;
    cin >> T >> n;
    priority_queue<process, vector<process>, cmp> pq;
    for(int i = 0; i < n; ++i){
        cin >> A >> B >> C;//pid, 프로세스 시간, 우선순위        
        pq.push({A, B, C});
    }

    for(int i = 0; i < T; ++i){
        if(pq.empty()) continue;

        cout << pq.top().A << '\n';
        if(pq.top().B-1 != 0){
            process p = {pq.top().A, pq.top().B-1, pq.top().C-1};
            pq.push(p);
        }
        pq.pop();
    }
    return 0;
}