#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, ord;
    cin >> N >> M;
    vector<int> paprice(N);
    vector<int> carweight(M);
    priority_queue<int, vector<int>, greater<int>> parkarea;
    queue<int> wlist;
    map<int, int> parkstate;//차량번호, 주차번호
    
    for(int i = 0; i < N; ++i){
        cin >> paprice[i]; //2, 3, 5
        parkarea.push(i); //0, 1, 2
    }

    for(int i = 0; i < M; ++i){
        cin >> carweight[i];//200 100 300 800
    }

    int totalprice = 0;
    for(int i = 0; i < 2*M; ++i){
        cin >> ord;
        if(ord > 0){//차가 들어온다~
            if(parkarea.size() == 0){
                wlist.push(ord);
            }
            else{
                parkstate[ord] = parkarea.top();//주차공간에 해당 차량이 들어간다.
                parkarea.pop();
            }
        }
        else{//차가 나간다~
            int aord = abs(ord);
            totalprice += paprice[parkstate[aord]] * carweight[aord-1];
            parkarea.push(parkstate[aord]);
            parkstate[aord] = 0;

            if(!wlist.empty()){
                parkstate[wlist.front()] = parkarea.top();
                wlist.pop();
                parkarea.pop();
            }
        }
    }
    cout << totalprice;
    return 0;

    //3 1 2 4
}