#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int N, tmp;
    cin >> N;
    deque<int> deq;
    for(int i = 0; i < N; ++i){
        cin >> tmp;
        deq.push_back(tmp);
    }

    sort(deq.begin(), deq.end());

    int back = 0;
    int sung = 0;

    while(!deq.empty()){
        //박씨 턴
        back += deq.back();
        deq.pop_back();

        //비었는지 체크

        if(deq.empty()) break;

        //성우 턴
        sung += deq.front();
        deq.pop_front();
    }

    cout << sung << ' ' << back;

    return 0;
}