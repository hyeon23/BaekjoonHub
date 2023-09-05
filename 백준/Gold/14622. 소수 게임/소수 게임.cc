#include <bits/stdc++.h>
using namespace std;

vector<bool> eratos(5000001, true);
vector<bool> visited(5000001, false);

void isprime(int N){//N이 소수임을 출력
    if (N <= 1) return;
    for(int i = 2; i * i <= 5000001; ++i){
        if(eratos[i]){
            for(int j = i * i; j <= 5000001; j += i)
                eratos[j] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    isprime(5000001);
    //대웅 -> 규성 순서
    int N, d, g;

    priority_queue<int> dpq;//대웅 소수 큐
    priority_queue<int> gpq;//규성 소수 큐

    long long dscore = 0;
    long long gscore = 0;

    eratos[0] = false;
    eratos[1] = false;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> d >> g;

        if(!eratos[d]){//소수가 아닌 수
            if(gpq.size() < 3) gscore += 1000;
            else{
                int top1 = gpq.top();
                gpq.pop();
                int top2 = gpq.top();
                gpq.pop();
                gscore += gpq.top();
                gpq.push(top2);
                gpq.push(top1);
            }
        }
        else{
            //새 소수라면
            if(!visited[d]){
                dpq.push(d);//새로운 소수
                visited[d] = true;
            }
            else{
                dscore -= 1000;//이미 부른 소수
            }
        }

        if(!eratos[g]){//소수가 아닌 수
            if(dpq.size() < 3) dscore += 1000;
            else{
                int top1 = dpq.top();
                dpq.pop();
                int top2 = dpq.top();
                dpq.pop();
                dscore += dpq.top();
                dpq.push(top2);
                dpq.push(top1);
            }
        }
        else{
            //새 소수라면
            if(!visited[g]){
                gpq.push(g);//새로운 소수
                visited[g] = true;
            }
            else{
                gscore -= 1000;//이미 부른 소수
            }
        }
    }
    if(dscore == gscore) cout << "우열을 가릴 수 없음";
    else if(dscore > gscore) cout << "소수의 신 갓대웅";
    else cout << "소수 마스터 갓규성";
    return 0;
}